#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, A, B;
  cin >> N >> A >> B;

  if (A > B) {
    cout << 0 << endl;
    return 0;
  }
  if (N == 1 && A != B) {
    cout << 0 << endl;
    return 0;
  }
  if (N == 1 && A == B) {
    cout << 1 << endl;
    return 0;
  }

  long long ans = (B - A) * (N - 2) + 1;
  cout << ans << endl;
}
