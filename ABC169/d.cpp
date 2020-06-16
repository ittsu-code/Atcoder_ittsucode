#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<pair<long long, long long>> prime_foctorize(long long N) {
  vector<pair<long long, long long>> res;
  for (long long i = 2; i * i <= N; i++) {
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
  long long N;
  cin >> N;

  const auto &res = prime_foctorize(N);

  long long cnt = 0;
  for (auto p : res) {
    long long index = 1;
    long long border = 1;
    while (p.second >= border) {
      cnt++;
      index++;
      border += index;
    }
  }

  cout << cnt << endl;
}