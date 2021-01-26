#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; // n : kinds of coin, m : money
    vector<int> coin;
    
    //input
    cin >> n >> m;
    int c;
    for(int i = 0; i < n; i++)
    {
        cin >> c;
        coin.push_back(c);
    }
    
    int ans = 0, r = m; // r : remained money
    int c_i = coin.size() - 1;
    while(r != 0)
    {
        if(coin[c_i] <= r)
        {
            ans ++;
            r -= coin[c_i];
        }
        else // 제일 큰 코인 단위가 남은 돈 보다 클 경우
        {
            c_i--;
        }
    }
    
    cout << ans;
    return 0;
}

// 2016KB, 36ms