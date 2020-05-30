#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  int count[4][3][10] = {0};

  for (int i = 0; i < N; i++) {
    int b, f, r, v;
    cin >> b >> f >> r >> v;
    count[b][f][r] += v;
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
        cout << count[i][j][k] << ' ';
      }
    }
  }
}