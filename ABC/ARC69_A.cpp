#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, M;
  cin >> N >> M;

  long long ans = 0;
  ans += min(N, M / 2);
  M -= N * 2;
  ans = M / 4;
  cout << ans << endl;
}