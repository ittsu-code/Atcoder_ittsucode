#include <bits/stdc++.h>
using namespace std;

int main() {
  int H;
  cin >> H;
  int W = 2 * H - 1;

  vector<vector<char>> S(H, vector<char>(W));

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> S.at(i).at(j);
    }
  }

  const vector<int> Hi = {1, 1, 1};
  const vector<int> Wi = {-1, 0, 1};

  for (int i = H - 1; i >= 0; i++) {
    for (int j = 0; j < W; j++) {
      if (S.at(i).at(j) == '.' || S.at(i).at(j) == '#') continue;

      if (S.at(i).at(j) == 'X') {
        for (int d = 0; d < 3; d++) {
          const int ni = i + Hi.at(d);
          const int nj = j + Wi.at(d);

          if (ni < 0 or H <= ni) continue;
          if (nj < 0 or W <= nj) continue;
          if (S.at(ni).at(nj) == '#') S.at(ni).at(nj) = 'X';
        }
      }
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cout << S.at(i).at(j);
      if (j == W - 1) cout << endl;
    }
  }
}