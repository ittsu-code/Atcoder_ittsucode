#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

int main() {
  long long N;
  cin >> N;

  long long num = 0;
  long long ans = 1;
  while (num < N) {
    num += ans;
    ans++;
  }

  if (num == N)
    cout << ans << endl;
  else
    cout << ans - 1 << endl;
}