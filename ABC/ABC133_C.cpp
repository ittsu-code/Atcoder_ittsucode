#include <bits/stdc++.h>
using namespace std;

int main() {
  long long L, R;
  cin >> L >> R;

  long long ans = 2019;
  for (int i = 0; i <= min(R - 1, L + 2018); i++) {
    for (int j = i + 1; i <= min(R, L + 2019); i++) {
      ans = min(ans, ((L * i) % 2019));
    }
  }

  cout << ans << endl;
}