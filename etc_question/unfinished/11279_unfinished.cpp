/*
11279.cpp

heap.
트리의 한 종류.
반 정렬 상태를 유지 -> upper level과 under level 끼리 정렬된 정도.

max heap : 11279에 쓸 자료구조
부모 node key값 >= 자식 node key값
9 >= 7

min heap
부모 node key값 <= 자식 node key값
7 <= 9
*/

/*
Input
13 // number of case = n

이하는 number, 0은 출력후 pop
0
1
2
0
0
3
2
1
0
0
0
0
0


Output
0
2
1
3
2
1
0
0
*/
#include <iostream>
#define MAXSIZE 100001
using namespace std;

class MaxHeap
{
    public:
    MaxHeap()
    {
        arr[0] = -1;
        this->len = 0;
    }
    ~MaxHeap()
    {
        
    }
    
    void Pop();
    void Swap(int x, int y);
    void DeleteRoot();
    bool Add(int n);
    
    int DownSort(int root); //위에서 아래로
    int UpSort(int child); //아래에서 위로
    private:
        int arr[MAXSIZE];
        int len;
};

void MaxHeap::Pop()
{
    if(len == 0)
    {
        cout << "0\n";
    }
    else
    {
        cout << arr[1] << "\n";
        DeleteRoot();
    }
}

void MaxHeap::Swap(int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void MaxHeap::DeleteRoot()
{
    arr[1] = arr[len];
    len--;
    DownSort(1);
}

bool MaxHeap::Add(int n)
{
    if(len <= MAXSIZE)
    {
        len++;
        arr[len] = n;
        UpSort(len);
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////
// 여기서 문제인듯
// child left랑 right도 비교를 해야한다.
////////////////////////////////////////////
int MaxHeap::DownSort(int root)
{
    if(len == 0)
        return 1;
    
    int left = root * 2;
    int right = (root * 2) + 1;
    if(root == len)
    {
        return 1;
    }
    
    if(left <= len) // index error 방지
    {
        // left child 값이 root보다 클 경우
        // swap해야함
        
        if(right <= len)
        {
            if(arr[left] > arr[root])
            {
                if(arr[left] < arr[right])
                {
                    Swap(right, root);
                    return DownSort(right);
                }
                Swap(left, root);
                return DownSort(left);
            }   
        }
        
        else
        {
            if(arr[left] > arr[root])
            {
                Swap(left, root);
                return DownSort(left);
            }
            
            if(arr[left] <= arr[root])
            {
                return 1;
            }
        }
 
    }
    
    if(right <= len) // index error 방지
    {
        // right child 값이 root보다 클 경우
        // swap해야함
        
        if(left <= len)
        {
            if(arr[right] > arr[root])
            {
                if(arr[right] < arr[left])
                {
                    Swap(left, root);
                    return DownSort(left);
                }
                Swap(right, root);
                return DownSort(right);
            }
        }
        
        else
        {
            if(arr[right] > arr[root])
            {
                Swap(right, root);
                return DownSort(right);
            }
            
            if(arr[right] <= arr[root])
            {
                return 1;
            }
        }
    }

}

// 여기서 문제인듯
int MaxHeap::UpSort(int child)
{
	/*
    if(len == 0)
    {
        return 1;
    }
    */
	
    if(child == 1) // child가 root면 끝
    {
        return 1;
    }
    
    // 7's root = 7/2 = 3
    // 6's root = 6/2 = 3
    // just child / 2
    int root = child / 2;
    
    // root node 값이 child node 값 보다 작으면
    // maxheap아니어서 swap 해야함
    if(arr[root] < arr[child])
    {
        Swap(root, child);
        return UpSort(root);
    }
    // root node 값이 child node 값 보다 크면
    // maxheap이니까 swap 안해도 됨
    else
    {
        return 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    MaxHeap heap;
    int input;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        if(input == 0)
        {
            heap.Pop();
        }
        else
        {
            heap.Add(input);
        }
    }
    
    return 0;
}

//Segmantation fault & Without Returning Error