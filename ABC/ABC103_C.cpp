#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int ans = 0;
  for (int i = 0; i < N - 1; i++) {
    ans += (A.at(i) - 1);

    cout << ans << endl;
  }