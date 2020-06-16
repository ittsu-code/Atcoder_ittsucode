#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, Q;
  cin >> N >> M >> Q;

  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a.at(i);

  vector<int> s(N + 1, 0);
  for (int i = 0; i < N; ++i) s.at(i + 1) = s.at(i) + a.at(i);
}