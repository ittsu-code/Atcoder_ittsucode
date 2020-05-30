#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, vector<int> &memo) {
  if (n == 0 || n == 1) return memo[n] = 1;
  if (memo[n] != -1) return memo[n];
  return memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
}

int main() {
  int N;
  cin >> N;

  vector<int> memo(N, -1);
  cout << fibonacci(N, memo) << endl;
}