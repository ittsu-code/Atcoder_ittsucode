#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> p(N), q(N);
  for (int i = 0; i < N; i++) cin >> p.at(i);
  for (int i = 0; i < N; i++) cin >> q.at(i);

  vector<int> a(N);
  for (int i = 0; i < N; i++) a.at(i) = i + 1;

  map<vector<int>, int> mp;
  do {
    mp[a] = mp.size();
  } while (next_permutation(a.begin(), a.end()));

  int ans = abs(mp[p] - mp[q]);
  cout << ans << endl;
}