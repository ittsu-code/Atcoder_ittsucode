#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main() {
  int N;
  cin >> N;

  string S;
  cin >> S;

  vector<int> cnt(26);
  for (int i = 0; i < N; i++) {
    cnt.at(S.at(i))++;
  }

  long long ans = 0;
  for (int i = 0; i < 26; i++) {
    ans += cnt.at(i) % MOD;
  }

  cout << ans - 1 << endl;
}