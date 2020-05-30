#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  long long A, K;
  cin >> A >> K;

  if (K == 0) {
    cout << 2000000000000 - A << endl;
    return 0;
  }

  long long cnt = A;
  int ans = 0;
  while (cnt <= 2000000000000) {
    cnt = 1 + cnt + K * cnt;
    ans++;
  }

  cout << ans << endl;
}