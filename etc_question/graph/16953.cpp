#include <bits/stdc++.h>

using namespace std;

int main()
{
    int  a, b;
    cin >> a >> b;
    

    int ans = 1;
    while(true)
    {
        if(a > b)
        {
            ans = -1;
            break;
        }
        else if ( a == b)
        {
            break;
        }
        
        if(b % 2 == 0) // 짝수
        {
            b /= 2;
            ans++;
        }
        else // 홀수
        {
            if(b % 10 == 1) //  1의 자리가 1인지
            {
                b /= 10;
                ans++;
            }
            else // 방법 없음
            {
                ans = -1;
                break;
            }
        }
    }
    
    cout << ans;

    return 0;
}

// 2016KB, 0ms