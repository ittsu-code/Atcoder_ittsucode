#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int cnt = 0;
  int ans = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == 'B')
      cnt++;
    else
      ans += cnt;
  }

  cout << ans << endl;
}