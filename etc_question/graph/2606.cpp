#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> visited(1001, false);
vector<vector<int>> g; // graph
int ans = -1;

void DFS(int index)
{
    if(visited[index])
    {
        return;
    }
    else
    {
        visited[index] = true;
        ans++;
        for(int i = 0; i < g[index].size(); i++)
        {
            if(!visited[g[index][i]])
            {
                DFS(g[index][i]);
            }
        }
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    
    /*
    n : 정점의 개수
    m : 간선의 개수
    v : 탐색을 시작할 번호
    */
    int n, m;
    cin >> n >> m;
    
    vector<int> temp_v;
    for(int i = 0; i < n + 1; i++)
    {
        g.push_back(temp_v);
    }
    
    int x, y;
    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    
    DFS(1);
    cout << ans;
    return 0;
}

//2148KB, 0ms