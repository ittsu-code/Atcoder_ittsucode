#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
const long long INF = 1LL << 60;

template <typename T>
bool chmin(T& a, const T& b) {
  if (a > b) {
    a = b;  // aをbで更新
    return true;
  }
  return false;
}

int main() {
  int N;
  cin >> N;

  double dp[110000];
  for (int i = 0; i < 110000; i++) dp[i] = INF;
  dp[0] = 1;

  for (int i = 0; i < N; i++) {
    for (int j = 0; pow(6, j) <= N; j++) {
      for (int k = 0; pow(9, k) <= N; k++) {
        chmin(dp[i + j], dp[i] + 1);
        chmin(dp[i + j], dp[i] + pow(6, j));
        chmin(dp[i + j], dp[i] + pow(9, k));
      }
    }
  }

  cout << dp[N] << endl;
}