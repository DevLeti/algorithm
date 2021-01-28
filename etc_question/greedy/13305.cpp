#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    // cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n; //도시의 개수, gas station
    cin >> n;
    
    int temp;
    queue<int> d; // distance
    vector<int> gas; // gas station vector
    for(int i = 0; i < n - 1 ; i++)
    {
        cin >> temp;
        d.push(temp);
    }
    // front        end
    // 2       3     1
    // for(int i = 0; i < n ; i++)
    // {
    //     cout << d.front() << ' ';
    //     d.pop();
    // }

    for(int i = 0;i < n ; i++)
    {
        cin >> temp;
        gas.push_back(temp);
    }
    // 5 2 4 1
    // for(int i = 0; i < n + 1 ; i++)
    // {
    //     cout << gas[i] << ' ';
    // }
    
    int cheap_gas = gas[0]; // 5
    long long ans = 0;
    for(int i = 1; i < n; i++)
    {
        if(gas[i] < cheap_gas) // cheaper gas!
        {
            ans += (long long)d.front() * cheap_gas;
            cheap_gas = gas[i];
            d.pop();
        }
        else
        {
            ans += (long long)d.front() * cheap_gas;
            d.pop();
        }
    }
    
    cout << ans;
    return 0;
}

// 3328KB, 24ms
// ans가 int범위 밖이었다. long long으로 바꾸니 해결.