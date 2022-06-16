//DFS, BFS practice
// DFS
// https://hongku.tistory.com/157
// BFS
// https://hongku.tistory.com/156
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> visited(1001, false);
queue<int> q;
vector<vector<int>> g; // graph

void DFS(int index)
{
    if(visited[index])
    {
        return;
    }
    else
    {
        visited[index] = true;
        cout << index << ' ';
        for(int i = 0; i < g[index].size(); i++)
        {
            int next = g[index][i];
            DFS(next);
        }
    }
}

void BFS(int index)
{
    q.push(index);
    visited[index] = true;
    
    // 큐가 not empty -> 방문안한 노드가 있다.
    while(!q.empty())
    {
        int next = q.front();
        q.pop();
        cout << next << ' ';
        for(int i = 0; i < g[next].size(); i++)
        {
            if(!visited[g[next][i]])
            {
                q.push(g[next][i]);
                visited[g[next][i]] = true;
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
    int n, m, v;
    cin >> n >> m >> v;
    

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
    
    // sort
    for(int i = 0; i < g.size(); i++)
    {
        sort(g[i].begin(), g[i].end());
    }
    
    DFS(v);
    cout << '\n';
    for(int i = 0; i < 1001; i++)
    {
        visited[i] = false;
    }
    BFS(v);
    return 0;
}

// 2284KB, 0ms