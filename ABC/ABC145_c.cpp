#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> x(N), y(N);
  for (int i = 0; i < N; i++) cin >> x.at(i) >> y.at(i);

  auto dist = [&](int i, int j) {
    double dx = x.at(i) - x.at(j);
    double dy = y.at(i) - y.at(j);
    return sqrt(dx * dx + dy * dy);
  };

  vector<int> p(N);
  for (int i = 0; i < N; i++) p.at(i) = i;
  double len = 0;
  int cnt = 0;

  do {
    for (int i = 0; i < N - 1; i++) {
      len += dist(p.at(i), p.at(i + 1));
    }
    cnt++;
  } while (_permutation(p.begin(), p.end()));

  double ans = len / cnt;
  cout << fixed << setprecision(6);
  cout << ans << endl;
}