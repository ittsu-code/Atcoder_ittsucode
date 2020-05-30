#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> S(N, 0);
  for (int i = 0; i < N; i++) {
    int d;
    cin >> d;
    for (int j = 0; j < d; j++) {
      int A;
      cin >> A;
      A--;
      S.at(A)++;
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 0) ans++;
  }

  cout << ans << endl;
}