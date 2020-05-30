#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  int sz = N.size();

  int ans = 0;
  for (int i = 1; i <= sz; i++) {
    if (N.at(i) = 'U') {
      ans += sz - i;
      ans += (i - 1) * 2;
    } else {
      ans += i - 1;
      ans += (sz - i) * 2;
    }
  }

  cout << ans << endl;
}