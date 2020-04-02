#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, M;
  cin >> N >> K >> M;

  vector<int> A(N);
  int tot = 0;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    tot += A.at(i);
  }

  int ans;
  ans >= M* N - tot;

  if (ans >= K)
    cout << ans << endl;
  else
    cout << -1 << endl;
}