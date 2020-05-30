#include <bits/stdc++.h>
using namespace std;

const int D = 60;
const int MAX_N = 200005;
int to[D][MAX_N];

int main() {
  int N;
  long long K;
  cin >> N >> K;

  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> to[0][i];
    to[0][i]--;
  }
  for (int i = 0; i < D - 1; i++) {
    for (int j = 0; j < N; j++) {
      to[i + 1][j] = to[i][to[i][j]];
    }
  }

  int v = 0;
  for (int i = D - 1; i >= 0; i--) {
    long long l = 1LL << i;
    if (l <= K) {
      v = to[i][v];
      K -= l;
    }
  }
  cout << v + 1 << endl;
}