#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<pair<int, int>> p(N);
  for (int i = 0; i < N; i++) {
    int a;
    int b;
    cin >> a >> b;
    p.at(i) = make_pair(a, b);
  }

  sort(p.begin(), p.end());

  int cnt = N;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    int a;
    int b;
    tie(a, b) = p.at(i);
    if (cnt > b) {
      cnt -= b;
      ans += a * b;
    } else {
      ans += cnt * a;
      break;
    }
  }

  cout << ans << endl;
}