#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m; // n = number of computer
    // m = number of network
    cin >> n >> m;
    
    //[0] is not used.
    vector<vector<int>> net(101,(101,0));
    int from, to;
    for(int i = 0; i < m; i++)
    {
        cin >> from >> to;
        net[from][to] = 1;
    }
    
    vector<bool> visited(101,false);
    visited[1] = true;
    
    //find which computers are infected
    int ans;
    return 0;
}

//2606, not finished