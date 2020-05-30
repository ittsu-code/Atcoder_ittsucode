#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  vector<vector<char>> A(H, vector<char>(W));
  cin >> H >> W;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A.at(i).at(j);
    }
  }

  int cnt = 0;
  cin >> H >> W;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (A.at(i).at(j) == '#') cnt++;
    }
  }

  if (cnt == H + W - 1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}