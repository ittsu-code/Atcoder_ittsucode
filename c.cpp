#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<vector<char>> M(10, vector<char>(10));
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

void dfs(int h, int w) {
  M.at(i).at(j) = 'o';
  seen[0][0] = true;

  for (int dir = 0; dir < 4; ++dir) {
    int nh = h + dx[dir];
    int nw = w + dy[dir];

    // 場外アウトしたり、移動先が壁の場合はスルー
    if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
    if (field[nh][nw] == 'x') continue;

    if (seen[nh][nw]) continue;

    dfs(nh, nw);
  }
}

int main() {
    for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> M.at(i).at(j);
    }
  }

  memset(seen, 0, sizeof(seen));

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      dfs(i, j);
    }
  }
}