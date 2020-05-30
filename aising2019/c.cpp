#include <bits/stdc++.h>
using namespace std;

int H, W;
vector<string> A;

const vector<int> dx = {-1, 0, 1, 0};
const vector<int> dy = {0, -1, 0, 1};

bool seen[410][410];
bool flag = true;
void dfs(int h, int w) {
  seen[h][w] = true;

  for (int dir = 0; dir < 4; ++dir) {
    int nh = h + dx[dir];
    int nw = w + dy[dir];
    if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
    if (A[nh][nw] == '.') continue;
    if (seen[nh][nw]) continue;
    if (A[nh][nw] == '#' && dir <= 1) flag = false;
    dfs(nh, nw);
  }
}

int main() {
  cin >> H >> W;
  A.resize(H);
  for (int h = 0; h < H; ++h) cin >> A[h];

  int sh = 0, sw = 0;

  memset(seen, 0, sizeof(seen));
  dfs(sh, sw);

  if (flag)
    cout << "Possible" << endl;
  else
    cout << "Impossible" << endl;
}
