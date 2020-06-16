#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;

int main() {
  int N, NG1, NG2, NG3;
  cin >> N >> NG1 >> NG2 >> NG3;

  if (N == NG1 || N == NG2 || N == NG3) {
    cout << "NO" << endl;
    return 0;
  }

  vector<int> dp(N + 1, INF);
  dp[N] = 0;

  for (int i = N; i >= 0; i--) {
    if (i == NG1 || i == NG2 || i == NG3) continue;
    for (int j = 1; j <= 3; j++) {
      if (i - j < 0) continue;
      dp[i - j] = min(dp[i] + 1, dp[i - j]);
    }
  }

  if (dp[0] <= 100)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}