#include <bits/stdc++.h>
using namespace std;

vector<vector<bool>> v(50, vector<bool>(50, false));
vector<vector<bool>> went(50,vector<bool>(50, false));
int jirung = 0;

void find(int x, int y) {
  if(!went[x][y] && v[x][y]) {
    went[x][y] = true;
    if(x - 1 >= 0) {
      find(x-1, y);
    }
    if (y - 1 >= 0) {
      find(x, y-1);
    }
    if (x + 1 < 50) {
      find(x+1, y);
    }
    if (y + 1 < 50) {
      find(x, y+1);
    }
  }
}

int main() {
  int t;
  int m,n;
  int k;
  cin >> t;

  int x, y;

  for(int i = 0; i < t; i ++) {
    cin >> m >> n >> k;
    jirung = 0;
    for(int j = 0; j < k; j++) {
      cin >> x >> y;
      v[x][y] = true;
    }

    for(int a = 0; a < 50; a++) {
      for(int b = 0; b < 50; b++) {
        if(v[a][b] && !went[a][b]) {
          find(a, b);
          jirung ++;
        }
      }
    }
    
    cout << jirung << "\n";
    for(int a = 0; a < 50; a++) {
      for(int b = 0; b < 50; b++) {
        v[a][b] = false;
        went[a][b] = false;
      }
    }
  }
  
  
  return 0;
}
