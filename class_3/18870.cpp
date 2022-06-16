#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    // algorithm optimization
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n; 
    cin >> n;
    
    vector<pair<int,int>> v;
    vector<int> ans(1000001);
    int temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        
        // input, index
        v.push_back(make_pair(temp, i));
    }
    
    sort(v.begin(), v.end());
    // pair로 sort할땐 pair.first 기준으로 sort함
    
    int index = 0;
    int pivot = v[0].first;
    for(int i = 0; i < n; i++)
    {
        if(pivot == v[i].first)
        {
            ans[v[i].second] = index;
        }
        else
        {
            index++;
            ans[v[i].second] = index;
            pivot = v[i].first;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << ' ';
    }
    return 0;
}

//18340KB, 348 ms