#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, K;
  cin >> A >> B >> K;

  int cnt = 0;
  int ans;
  for (int i = A; i >= 1; i--) {
    if (A % i == 0 && B % i == 0) cnt++;
    if (cnt == K) {
      ans = i;
      break;
    }
  }

  cout << ans << endl;
}