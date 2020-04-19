#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;

  while (true) {
    cin >> N >> M;
    if (N == 0 && M == 0) return 0;
    int ans = 0;
    for (int i = 1; i <= N - 2; i++) {
      for (int j = i + 1; j <= N - 1; j++) {
        for (int k = j + 1; k <= N; k++) {
          if (i + j + k == M) ans++;
        }
      }
    }

    cout << ans << endl;
  }
}