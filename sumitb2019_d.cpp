#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N, S;
  cin >> N >> S;

  int ans = 0;
  for (int i = 0; i < 1000; i++) {
    string t;
    int x = i;
    for (int j = 0; j < 3; j++) {
      t += '0' + x % 10;
      x /= 10;
    }
    int ti = 0;
    for (int j = 0; j < N; j++) {
      if (s[j] == t[ti]) {
        ti++;
        if (ti == 3) break;
      }
    }
    if (ti == 3) ans++;
  }

  cout << ans << endl
}