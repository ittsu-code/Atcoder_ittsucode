#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int ans = 0;
  for (int i = 0; i < N; i++) {
    ans += min(A.at(i) * 2, ((K - A.at(i)) * 2));
    cout << A.at(i) << endl;
  }

  cout << ans << endl;
}