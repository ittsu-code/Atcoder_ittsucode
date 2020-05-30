#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N, M, X;
  cin >> N >> M >> X;

  vector<int> C(N);
  vector<vector<int>> A(N, vector<int>(M));

  for (int i = 0; i < N; i++) {
    cin >> C.at(i);
    for (int j = 0; j < M; j++) {
      cin >> A.at(i).at(j);
    }
  }

  int ans = 1001001001;
  for (int tmp = 0; tmp < (1 << 12); tmp++) {
    bitset<12> s(tmp);

    int cnt = 0;
    vector<int> sum(M, 0);
    for (int i = 0; i < N; i++) {
      if (s.test(i)) cnt += C.at(i);
      for (int j = 0; j < M; j++) {
        if (s.test(i)) {
          sum.at(j) += A.at(i).at(j);
        }
      }
    }

    bool flag = true;
    for (int i = 0; i < M; i++) {
      if (sum.at(i) < X) flag = false;
    }
    if (flag) ans = min(ans, cnt);
  }

  if (ans == 1001001001)
    cout << -1 << endl;
  else
    cout << ans << endl;
}