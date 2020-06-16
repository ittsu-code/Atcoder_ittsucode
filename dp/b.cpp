#include <bits/stdc++.h>
using namespace std;

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
  int N, K;
  cin >> N >> K;

  vector<int> A(110000);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  vector<int> dp(110000);
  for (int i = 0; i < 110000; i++) {
    dp.at(i) = INF;
  }

  dp[0] = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 1; j <= K; j++) {
      chmin(dp[i + j], dp[i] + abs(A.at(i) - A.at(i + j)));
    }
  }

  cout << dp[N - 1] << endl;
}