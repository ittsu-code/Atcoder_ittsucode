#include <bits/stdc++.h>
using namespace std;

int main() {
  int txa, tya, txb, tyb, T, V, n;
  cin >> txa >> tya >> txb >> tyb >> T >> V >> n;

  int limit = T * V;
  bool flag = false;
  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;

    double dist1 = sqrt(pow((x - txa), 2) + pow((y - tya), 2));
    double dist2 = sqrt(pow((txb - x), 2) + pow((tyb - y), 2));
    if (limit >= dist1 + dist2) flag = true;
  }

  if (flag)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}