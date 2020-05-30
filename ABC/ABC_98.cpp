#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  string S;
  cin >> S;

  vector<int> W(N + 1, 0);
  vector<int> E(N + 1, 0);
  int cntW = 0;
  int cntE = 0;
  for (int i = 0; i < N; ++i) {
    if (S.at(i) == 'W') cntW++;
    if (S.at(i) == 'E') cntE++;
    W.at(i + 1) = cntW;
    E.at(i + 1) = cntE;
  }

  long long ans = 1001001001;
  for (int i = 0; i < N; ++i) {
    long long num = 0;
    num += W.at(i);
    num += E.at(N) - E.at(i + 1);
    ans = min(ans, num);
  }

  cout << ans << endl;
}