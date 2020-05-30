#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  vector<int> W(N);
  for (int i = 0; i < N; ++i) {
    if (S.at(i) == '.')
      W.at(i) = 1;
    else
      W.at(i) = 0;
  }
  vector<int> Ws(N + 1, 0);
  for (int i = 0; i < N; ++i) Ws.at(i + 1) = Ws.at(i) + W.at(i);

  vector<int> B(N);
  for (int i = 0; i < N; ++i) {
    if (S.at(i) == '#')
      B.at(i) = 1;
    else
      B.at(i) = 0;
  }
  vector<int> Bs(N + 1, 0);
  for (int i = 0; i < N; ++i) Bs.at(i + 1) = Bs.at(i) + B.at(i);

  int ans = 1001001001;
  for (int i = 0; i < N + 1; i++) {
    ans = (ans, Ws.at(i) + Bs.at(N) - Bs.at(i + 1));
  }

  cout << ans << endl;
}