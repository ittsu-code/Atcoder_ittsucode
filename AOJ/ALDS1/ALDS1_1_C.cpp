#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

bool is_prime(long long N) {
  if (N == 1) return false;
  for (long long i = 2; i * i <= N; ++i) {
    if (N % i == 0) return false;
  }
  return true;
}

int main() {
  int N;
  cin >> N;

  int ans = 0;
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    if (is_prime(A)) ans++;
  }

  cout << ans << endl;
}