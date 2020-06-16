#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;

  vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    if (A.at(i) == 0) {
      cout << 0 << endl;
      return 0;
    }
  }

  long long ans = 1;
  for (int i = 0; i < N; i++) {
    cout << 1000000000000000000 / ans << endl;
    if (A.at(i) <= 1000000000000000000 / ans) {
      cout << -1 << endl;
      return 0;
    } else {
      ans *= A.at(i);
    }
  }

  cout << ans << endl;
}
