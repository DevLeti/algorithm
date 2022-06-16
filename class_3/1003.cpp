#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    vector<pair<int, int>> f;
    // 0, 1 호출
    f.push_back(make_pair(1, 0));
    f.push_back(make_pair(0, 1));
    
    int loaded = 1;
    int temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        if(loaded < temp)
        {
            for(int i = loaded + 1; i <= temp; i++)
            {
                f.push_back(make_pair(f[i - 1].first + f[i - 2].first, f[i - 1].second + f[i - 2].second));
            }
            loaded = temp;
        }
        cout << f[temp].first << ' ' << f[temp].second << "\n";
    }
    return 0;
}

//2016KB, 0ms