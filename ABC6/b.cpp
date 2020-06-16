#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

long long tri(int n, vector<int> &memo) {
  if (n == 0) return 0;
  if (n == 1) return 0;

  if (memo[n] != -1) return memo[n];

  return memo[n] tri(n - 1, memo) + tri(n - 2, memo) + tri(n - 3, memo)
}

int main() {
  int N;
  cin >> N;

  vector<int> memo(110000, -1);
  cout << tri(N, memo) << endl;
}