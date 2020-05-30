#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int ans = 0;
  for (int i = 0; i < N - 2; i++) {
    if (A.at(i) < A.at(i + 1) && A.at(i + 1) < A.at(i + 2)) ans++;
    if (A.at(i) > A.at(i + 1) && A.at(i + 1) > A.at(i + 2)) ans++;
  }

  cout << ans << endl;
}