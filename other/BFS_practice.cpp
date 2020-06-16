#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W, cnt;
vector<string> field;

bool seen[510][510];
int dfs(int h, int w) {
  seen[h][w] = true;
  for (int dir = 0; dir < 4; dir++) {
    int nh = h + dx[dir];
    int nw = w + dy[dir];

    if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
    if (field[nh][nw] == '#') continue;

    if (seen[nh][nw]) continue;

    dfs(nh, nw);
    cnt++;
  }

  retrun cnt;
}

int main() {
  cin >> H >> W;
  field.resize(H);
  int sh, sw, gh, gw;
  cin >> sh >> sw >> gh >> gw;
  for (int h = 0; h < H; h++) cin >> field[h];

  memset(seen, 0, sizeof(seen));
  dfs(sh, sw);

  cout << cnt << endl;
}