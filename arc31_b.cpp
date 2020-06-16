#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

vector<string> field(10);
vector<string> fieldCopy(10);
bool flag = false;

bool dfs(int h, int w) {
  fieldCopy[h][w] = 'x';

  for (int dir = 0; dir < 4; ++dir) {
    int nh = h + dx[dir];
    int nw = w + dy[dir];

    if (nh < 0 || nh >= 10 || nw < 0 || nw >= 10) continue;
    if (fieldCopy[nh][nw] == 'x') continue;

    dfs(nh, nw);
  }

  int cnt = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (fieldCopy[i][j] == 'x') cnt++;
    }
  }
  cout << cnt << endl;
  if (cnt == 100)
    return true;
  else
    return false;
}

int main() {
  for (int h = 0; h < 10; ++h) cin >> field[h];

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      fieldCopy = field;
      if (fieldCopy[i][j] == 'o') continue;
      fieldCopy[i][j] = 'o';
      flag = dfs(i, j);
      if (flag) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
}