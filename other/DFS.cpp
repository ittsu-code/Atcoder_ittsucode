#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
  int height, width;
  cin >> height >> width;

  vector<string> field(height);
  for (int i = 0; i < height; i++) cin >> field[i];

  int sx, sy, gx, gy;
  for (int h = 0; h < height; h++) {
    for (int w = 0; w < width; w++) {
      if (field[h][w] == 'S') {
        sx = h;
        sy = w;
      }
      if (field[h][w] == 'G') {
        gx = h;
        gy = w;
      }
    }
  }

  vector<vector<int>> dist(height, vector<int>(width, -1));
  dist[sx][sy] = 0;

  vector<vector<int>> prev_x(height, vector<int>(width, -1));
  vector<vector<int>> prev_y(height, vector<int>(width, -1));

  queue<pair<int, int>> que;
  que.push(make_pair(sx, sy));

  while (!que.empty()) {
    pair<int, int> current_pos = que.front();
    int x = current_pos.first;
    int y = current_pos.second;
    que.pop();

    for (int d = 0; d < 4; d++) {
      int next_x = x + dx[d];
      int next_y = y + dy[d];
      if (next_x < 0 || next_x >= height || next_y < 0 || next_y >= width)
        continue;
      if (field[next_x][next_y] == '#') continue;

      if (dist[next_x][next_y] == -1) {
        que.push(make_pair(next_x, next_y));
        dist[next_x][next_y] = dist[x][y] + 1;
        prev_x[next_x][next_y] = x;
        prev_y[next_x][next_y] = y;
      }
    }
  }

  int x = gx, y = gy;
  while (x != -1 && y != -1) {
    field[x][y] = 'o';

    int px = prev_x[x][y];
    int py = prev_y[x][y];
    x = px, y = py;
  }

  for (int h = 0; h < height; h++) {
    for (int w = 0; w < width; w++) {
      cout << setw(3) << field[h][w];
    }
    cout << endl;
  }
}