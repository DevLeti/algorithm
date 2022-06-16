#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> time;
    int t;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        time.push_back(t);
    }
    sort(time.begin(), time.end());
    
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += time[i] * (n - i);
    }
    
    cout << ans;
    return 0;
}

// 2016KB, 0ms