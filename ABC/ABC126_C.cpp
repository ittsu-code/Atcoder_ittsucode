#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  double ans = 0;
  for (int i = 1; i <= N; i++) {
    int score = i;
    double tot = 1;
    while (score < K) {
      tot /= 2;
      score *= 2;
      cout << tot << endl;
    }
    ans += tot / N;
  }

  cout << fixed << setprecision(9);
  cout << ans << endl;
}