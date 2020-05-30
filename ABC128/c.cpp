#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> K(M);
  vector<vector<int>> s(M, vector<int>(1));

  for (int i = 0; i < M; i++) {
    int k;
    cin >> K.at(i);
    s.resize(M, vector<int>(k));
    for (int j = 0; j < k; j++) {
      cin >> s.at(i).at(j);
    }
  }

  vector<int> p(M);
  for (int i = 0; i < M; i++) cin >> p.at(i);

  int ans = 0;
  for (int tmp = 0; tmp < (1 << 10); tmp++) {
    bitset<10> B(tmp);
    int cnt = 0;
    int cnt2 = 0;
    for (int i = 0; i < M; i++) {
      for (int j = 0; j < K.at(i); j++) {
        if (B.test(s.at(i).at(j))) cnt2++;
      }
      if (cnt % 2 == p.at(i)) cnt++;
    }
    if (cnt == M) ans++;
  }

  cout << ans <<
}