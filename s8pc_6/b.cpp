#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N;

  vector<int> En(N);
  vector<int> Ex(N);
  vector<pair<int, int>> P(N);

  for (int i = 0; i < N; i++) {
    cin >> A >> B;
    En.at(i) = A;
    Ex.at(i) = B;
    P.at(i) = make_pair(A, B);
  }

  long long ans = 1001001001;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      long long cnt = 0;
      for (int k = 0; k < N; k++) {
        long long A, B;
        tie(A, B) = P.at(k);
        cnt += abs(En.at(i) - A) + abs(Ex.at(j) - B) + (B - A);
      }
      ans = min(ans, cnt);
    }
  }

  cout << ans << endl;
}