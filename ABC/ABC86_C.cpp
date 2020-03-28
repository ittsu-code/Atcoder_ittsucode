#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);
  for (int i = 0; i < N; i++) A.at(i)--;

  vector<int> cnt(N);
  for (int i = 0; i < N; i++) cnt.at(A.at(i))++;

  int ans = 0;
  int res = N - count(cnt.begin(), cnt.end(), 0);
  sort(cnt.begin(), cnt.end());
  for (int i = 0; i < N; i++) {
    if (cnt.at(i) != 0) {
      ans += cnt.at(i);
      res--;
    }
    if (K > res) break;
  }

  cout << ans << endl;
}