#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int ans = 0;
  vector<int> h(N);
  for (int i = 0; i < N; i++) {
    cin >> h.at(i);
    if (h.at(i) >= K) ans++;

    cout << ans << endl;
  }