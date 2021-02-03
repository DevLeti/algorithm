#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    int m;
    cin >> m;
    
    vector<int> v;
    int temp;
    for(int i = 0; i < m; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        cout << (int) (upper_bound(v.begin(), v.end(), temp) - lower_bound(v.begin(), v.end(), temp)) << ' ';
    }
    return 0;
}
//5216KB, 332ms