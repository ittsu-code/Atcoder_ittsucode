#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> a(N);
  for (int i = 0; i < N; ++i) cin >> a.at(i);

  vector<long long> s(N + 1, 0);
  map<long long> nums;
  for (int i = 0; i < N; ++i) s.at(i + 1) = s.at(i) + a.at(i);
  for (int i = 0; i < N + 1; i++) nums.at(s.at(i))++;

  long long ans = 0;
  for (auto it : nums) {
    long long num = it.second;
    res += num * (num - 1) / 2;
  }

  cout << ans << endl;
}