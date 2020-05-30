#include <bits/stdc++.h>
using namespace std;

int kaijo(int N) {
  int ans = 1;
  for (int i = 1; i <= N; i++) ans *= i;
  return ans;
}

int main() {
  int N, P;
  cin >> N >> P;

  vector<int> A(N);
  int cnt = 0;
  long long tot = 1;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    if (A.at(i) % 2 == 1) {
      cnt++;
      tot *= cnt;
    }

    int ans = 0;
    if (P == 0) {
      for (int i = 0; i < cnt; i += 2) {
        ans += tot / kaijo(tot - i);
      }

    } else {
    }

    cout << ans << endl;
  }