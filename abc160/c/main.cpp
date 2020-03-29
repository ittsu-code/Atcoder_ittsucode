#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, N;
  cin >> K >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  vector<int> B(N);
  for (int i = 0; i < N - 1; i++) {
    B.at(i) = A.at(i + 1) - A.at(i);
  }
  B.at(N - 1) = ((K - A.at(N - 1)) + A.at(0));

  int ans = 100100100;
  for (int i = 0; i < N; i++) {
    ans = min(ans, K - B.at(i));
  }

  cout << ans << endl;
}