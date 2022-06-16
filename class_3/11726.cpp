#include <iostream>

using namespace std;
int main() {
    int a[1001];
    a[1] = 1;
    a[2] = 2;
    
    int n;
    cin >> n;
    
    for(int i = 3; i <= n; i++)
    {
        a[i] = (a[i-1] + a[i-2]) % 10007;
    }
    
    cout << a[n];
    return 0;
}

// 2016KB, 0ms