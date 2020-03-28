#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D, X;
  cin >> N >> D >> X;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int tot = 0;
  for (int i = 0; i < N; i++) {
    int cnt;
    cnt += D / A.at(i) + 1;
    tot += cnt;
  }

  cout << tot << endl;
}