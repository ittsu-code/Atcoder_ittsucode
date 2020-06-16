#include <bits/stdc++.h>
using namespace std;
const INF = 1001001001;

int main() {
  int X, N;
  cin >> X >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  sort(A.begin(), A.end());

  int ans = INF;
  for (int i = 0; i <= 100; i++) {
    if (A.at(i) == i) continue;
  }
}