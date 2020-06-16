#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int cnt = 0;
  bitset<20> bit(X);
  for (int i = 19; i >= 0; i--)
    if (bit.test(i)) cnt += A.at(i);

  cout << cnt << endl;
}