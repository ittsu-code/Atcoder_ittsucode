#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N, K, R, S, P;
  cin >> N >> K >> R >> S >> P;
  string T;
  cin >> T;

  long long ans = 0;
  for (int i = 0; i < N; i++) {
    if (T.at(i) == 'r') {
      ans += P;
    } else if (T.at(i) == 's') {
      ans += R;
    } else if (T.at(i) == 'p') {
      ans += S;
    }
  }

  for (int i = K; i < N; i++) {
    if (T.at(i) == 'r' && T.at(i - K) == 'r') {
      ans -= P;
    } else if (T.at(i) == 's' && T.at(i - K) == 's') {
      ans -= R;
    } else if (T.at(i) == 'p' && T.at(i - K) == 'p') {
      ans -= S;
    }

    if (i - K * 2 < 0) continue;
    if (T.at(i) == 'r' && T.at(i - K) == 'r' && T.at(i - K * 2) == 'r') {
      ans += P;
    } else if (T.at(i) == 's' && T.at(i - K) == 's' && T.at(i - K * 2) == 's') {
      ans += R;
    } else if (T.at(i) == 'p' && T.at(i - K) == 'p' && T.at(i - K * 2) == 'p') {
      ans += S;
    }
  }

  cout << ans << endl;
}