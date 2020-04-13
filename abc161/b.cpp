#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(N);
  int tot = 0;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    tot += A.at(i);
  }

  sort(A.begin(), A.end());
  reverse(A.begin(), A.end());

  for (int i = 0; i < M; i++) {
    if (A.at(i) * 4 * M < tot) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}