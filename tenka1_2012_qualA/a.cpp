#include <bits/stdc++.h>
using namespace std;

long long count(int N, vector<long long> &memo) {
  if (N == 0)
    return 1;
  else if (N == 1)
    return 1;

  if (memo[N] != -1) return memo[N];
  return memo[N] = count(N - 2, memo) + count(N - 1, memo);
}

int main() {
  int N;
  cin >> N;

  vector<long long> memo(50, -1);
  cout << count(N, memo) << endl;
}