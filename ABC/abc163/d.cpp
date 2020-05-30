#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
  long long N, K;
  cin >> N >> K;

  int res = 0;
  for (int i = K; i < N; i++) {
    int minv = K * (K - 1) / 2;
    int maxv = (N * 2 - K + 1) * K / 2;
    res = res + (maxv - minv) % MOD;
  }

  cout << res << endl;
}