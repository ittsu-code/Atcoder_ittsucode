#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> V, X;

int cnt, col[15][15];
void dfs(int p1, int p2) {
  if (p1 < 0 || p1 >= 10 || p2 < 0 || p2 >= 10) return;
  if (col[p1][p2] >= 1 || X[p1][p2] == 'x') return;
  col[p1][p2] = cnt;
  dfs(p1 - 1, p2);
  dfs(p1 + 1, p2);
  dfs(p1, p2 + 1);
  dfs(p1, p2 - 1);
}

bool OK(vector<string> W) {
  X = W;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      col[i][j] = 0;
    }
  }

  cnt = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (X[i][j] == 'x' || col[i][j] == 1) continue;
      cnt++;
      dfs(i, j);
    }
  }
  if (cnt >= 2) return false;
  return true;
}

int main() {
  for (int i = 0; i < 10; i++) {
    string C;
    cin >> C;
    V.push_back(C);
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (V[i][j] == 'o') continue;
      V[i][j] = 'o';
      if (OK(V) == true) {
        cout << "YES" << endl;
        return 0;
      }
      V[i][j] = 'x';
    }
  }

  cout << "NO" << endl;
}
