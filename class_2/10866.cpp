#include <bits/stdc++.h>

using namespace std;

//node
struct node
{
	node() {data = -2; next = nullptr;}
	int data;
	node* next;
};

//back? front?
//************************************
//* [0] = back * ...* [len-1] = front*
//************************************
// -> index 맨 앞이 back, 맨 뒤가 front

class dq
{
public:
	dq() {len = 0;root.data = -1;}
	~dq()
	{
		node* del_node = new node; // dynamic allocation
		for (int j = 0; j<len;)
		{
			del_node->next = &root;
			for(int i = len; i > 0; i--) // 끝(front)부터 앞(back) 방향으로 delete
			{
				del_node->next = del_node->next->next;
			}
			delete del_node->next; // *del_node->next인가?
			len--;
		}
		delete del_node; // memory 누수 방지
	}
	
	void push_front(int x)
	{
		node* add_node = new node; // dynamic allocation
		add_node->data = x;
		
		node* itor = new node;
		itor->next = &root;
		for(int i = 0; i < len; i++)
		{
			itor->next = itor->next->next;
			//itor가 가르키는 주소 itor->를 itor->next->next == itor가 가르키는 주소 다음의 주소값을 가져감
		}
		itor->next->next = add_node;
		len++;
		
		itor->next = nullptr;
		delete itor;
	}
	
	void push_back(int x)
	{
		node* add_node = new node; // dynamic allocation
		add_node->data = x;
		add_node->next = root.next;
		root.next = add_node;
		len++;
	}
	
	void pop_front()
	{
	    if(len != 0)
	    {
	        node* pop_target = new node; //dynamic allocation
    		pop_target->next = &root;
    		for(int i = 0; i< len; i++)
    		{
    			pop_target->next = pop_target->next->next;
    		}
    		cout << pop_target->next->data << "\n";
    		delete pop_target->next;
    		delete pop_target;
    		len--;
	    }
		else
		{
		    cout << "-1\n";
		}
	}
	
	void pop_back(){
	    if(len != 0)
	    {
	        node* pop_target = new node;
    		pop_target->next = root.next;
    		cout << pop_target->next->data << "\n";
    		root.next = root.next->next;
    		delete pop_target->next;
    		delete pop_target;
    		len--;
	    }
		else
		{
		    cout << "-1\n";
		}
	}
	
	void size()
	{
		cout << len << "\n";
	}
	
	void empty()
	{
		if(len == 0)
		{
			cout << "1\n";
		}
		else
		{
			cout << "0\n";
		}
	}
	
	void front()
	{
	    if(len != 0)
	    {
    	    node* front_target = new node; // da
    		front_target->next = &root;
    		for(int i = 0; i <len; i++)
    		{
    			front_target->next = front_target->next->next;
    		}
    		cout << front_target->next->data<<"\n";
    		
    		front_target->next = nullptr;
    		delete front_target;
	    }
		else
		{
		    cout << "-1\n";
		}
	}
	
	void back()
	{
	    if(len != 0)
	    {
	        cout << root.next->data << "\n";
	    }
		else
		{
		    cout << "-1\n";
		}
	}
	
private:
	node root;
	int len;
};

int main()
{
	dq dq;
	int n; // input command size
	cin >> n;
	
	string in;
	int x;
	for(int i = 0; i < n; i++)
	{
		cin >> in;
		if(in == "push_back")
		{
			cin >> x;
			dq.push_back(x);
		}
		else if(in == "push_front")
		{
			cin >> x;
			dq.push_front(x);
		}
		else if(in == "pop_front")
		{
			dq.pop_front();
		}
		else if(in == "pop_back")
		{
			dq.pop_back();
		}
		else if(in == "size")
		{
			dq.size();
		}
		else if(in == "empty")
		{
			dq.empty();
		}
		else if(in == "front")
		{
			dq.front();
		}
		else if(in == "back")
		{
			dq.back();
		}
	}
	
	return 0;
}

//1988KB, 308ms