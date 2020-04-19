#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<pair<int, int>> S(N);
  for (int i = 0; i < N; i++) {
    int a;
    int b;
    cin >> a >> b;
    S.at(i) = make_pair(a, b);
  }

  vector<pair<int, int>> C(M);
  for (int i = 0; i < M; i++) {
    int c;
    int d;
    cin >> c >> d;
    C.at(i) = make_pair(c, d);
  }

  int minv;
  int ans;
  for (int i = 0; i < N; i++) {
    int a, b;
    minv = 1001001001;
    tie(a, b) = S.at(i);
    for (int j = 0; j < M; j++) {
      int c, d;
      tie(c, d) = C.at(j);
      if (minv > abs(a - c) + abs(b - d)) {
        ans = j;
      }
    }
    cout << ans << endl;
  }
}