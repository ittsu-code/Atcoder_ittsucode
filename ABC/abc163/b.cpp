#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(M);
  for (int i = 0; i < M; i++) cin >> A.at(i);

  int ans = N;
  for (int i = 0; i < M; i++) {
    ans -= A.at(i);
  }

  cout << ans << endl;
}