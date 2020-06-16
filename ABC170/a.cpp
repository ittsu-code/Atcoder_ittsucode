#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  vector<int> X = {a, b, c, d, e};
  sort(X.begin(), X.end());

  for (int i = 0; i < 5; i++) {
    if (X.at(i) == 0) cout << i + 1 << endl;
  }
}