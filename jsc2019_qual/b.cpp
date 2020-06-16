#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int cnt = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      if (A.at(i) > A.at(j)) cnt++;
    }
  }

  int ans = K * (2 * cnt + (K - 1) * cnt) / 2;
  cout << ans << endl;
}