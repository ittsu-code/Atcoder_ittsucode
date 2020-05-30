#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

bool func(int i, int x, const vector<int> &a, vector<vector<int>> &dp) {
  if (i == 0) {
    if (x == 0)
      return true;
    else
      return false;
  }

  if (dp[i][x] != -1) return dp[i][x];

  if (func(i - 1, x, a, dp)) return dp[i][x] = 1;
  if (func(i - 1, x - a.at(i - 1), a, dp)) return dp[i][x] = 1;
  return dp[i][x] = 0;
}

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  for (int i = 0; i < N; i++) cin >> a.at(i);

  int X;
  cin >> X;

  const int MAX = 100000;
  vector<vector<int>> dp(N + 1, vector<int>(MAX + 1, -1));
  if (func(N, X, a, dp))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}