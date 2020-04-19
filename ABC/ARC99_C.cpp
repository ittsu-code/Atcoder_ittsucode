#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int cnt = 1;
  int tot = N - K;

  while (N > 0) {
    tot -= (K - 1);
    cnt++
  }

  cout << cnt << endl;
}