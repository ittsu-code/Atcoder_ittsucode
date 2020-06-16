#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> A(N, vector<int>(M));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> A.at(i).at(j);
    }
  }

  int ans = -1;
  for (int i = 0; i < M - 1; i++) {
    for (int j = i + 1; j < M; j++) {
      int cnt = 0;
      for (int k = 0; k < N; k++) {
        cnt += max(A.at(k).at(i), A.at(k).at(j));
      }
      ans = max(ans, cnt);
    }
  }

  cout << ans << endl;
}