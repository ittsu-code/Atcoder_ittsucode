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

  int cnt = 0;
  for (int i = 1; i <= N - 1; i++) {
    bool flag = is_prime(i);
    if (flag) cnt++;
  }

  cout << cnt << endl;
}