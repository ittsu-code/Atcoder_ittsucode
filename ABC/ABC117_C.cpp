#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> a(M);
  for (int i = 0; i < M; ++i) cin >> a.at(i);
  sort(a.begin(), a.end());

  vector<int> b(M - 1);
  for (int i = 0; i < M - 1; ++i) {
    b.at(i) = a.at(i + 1) - a.at(i);
  }
  sort(b.begin(), b.end());

  for (int i = 0; i < N - 1; ++i) b.pop_back();

  int ans = 0;
  for (int i = 0; i < M - N; ++i) ans += b.at(i);
  cout << ans << endl;
}