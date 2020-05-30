#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main() {
  long long A, B, C;
  cin >> A >> B >> C;

  long long ans = (A * B) % MOD;
  ans = (ans * C) % MOD;

  cout << ans << endl;
}