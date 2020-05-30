#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<pair<long long, long long>> prime_foctorize(long long N) {
  vector<pair<long long, long long>> res;
  for (long long i = 2; i * i < N; i++) {
    if (N % i != 0) continue;
    long long ex = 0;
    while (N % i == 0) {
      ex++;
      N /= i;
    }
    res.push_back({i, ex});
  }
  if (N != 1) res.push_back({N, 1});
  return res;
}

int main() {
  int N, P;
  cin >> N >> P;

  const auto &pf = prime_foctorize(P);
  int ans = 1;
  for (auto p : pf) {
    for (int i = 0; i < p.second / N; ++i) ans *= p.first;
  }

  cout << ans << endl;
}