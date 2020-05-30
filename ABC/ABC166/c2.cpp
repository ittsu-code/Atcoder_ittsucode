#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H.at(i);
  }

  vector<vector<int>> G(N);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    bool can = true;
    for (int nv : G.at(i)) {
      if (H.at(i) <= H.at(nv)) {
        can = false;
      }
    }
    if (can) ans++;
  }

  cout << ans << endl;
}
