#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  int ans = 1001001001;
  for (int i = 1; i <= 317; i++) {
    for (int j = 1; j <= 317; j++) {
      int res;
      if (N > i * j) res = abs(i - j) + (N - i * j);
      res = min(ans, res);
    }
  }

  cout << ans << endl;
}