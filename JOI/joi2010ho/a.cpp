#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, M;
  cin >> N >> M;

  vector<long long> a(N - 1);
  for (int i = 0; i < N - 1; i++) cin >> a.at(i);

  vector<long long> s(N, 0);
  for (int i = 0; i < N - 1; ++i) s.at(i + 1) = s.at(i) + a.at(i);

  vector<long long> Q(M);
  long long tot = 0;
  for (int i = 0; i < M; i++) {
    long long a;
    cin >> a;
    tot += a;
    Q.at(i) = tot;
  }

  long long ans = s.at(Q.at(0));
  for (int i = 0; i < M - 1; i++) {
    if (Q.at(i + 1) > Q.at(i))
      ans += s.at(Q.at(i + 1)) - s.at(Q.at(i));
    else
      ans += s.at(Q.at(i)) - s.at(Q.at(i + 1));

    ans %= 100000;
  }

  cout << ans << endl;
}
