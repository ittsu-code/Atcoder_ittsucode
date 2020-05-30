#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string S;
  int K;
  cin >> S >> K;

  string M = S + S;
  int sz = M.size();

  int cnt = 0;
  for (int i = 0; i < sz - 1; i++) {
    if (M.at(i) == M.at(i + 1)) {
      cnt++;
      M.at(i + 1) = 'C';
    }
  }

  string N = S;
  int cnt2 = 0;
  sz = N.size();
  for (int i = 0; i < sz; i++) {
    if (N.at(i) == N.at(i + 1)) {
      cnt2++;
      N.at(i + 1) = 'C';
    }
  }

  int ans;
  if (K % 2 == 0) {
    ans = cnt / 2 * K;
    cout << ans << endl;
  } else {
    ans = cnt / 2 * (K - 1);
    ans += cnt2;
    cout << ans << endl;
  }
}