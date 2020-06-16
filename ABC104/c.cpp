#include <bits/stdc++.h>
using namespace std;

int main() {
  int D, G;
  cin >> D >> G;

  vector<long long> p(D);
  vector<long long> c(D);
  for (int i = 0; i < D; i++) {
    cin >> p.at(i) >> c.at(i);
  }

  long long res = 1 << 29;
  for (int bit = 0; bit < (1 << D); bit++) {
    long long sum = 0;
    long long num = 0;
    for (int i = 0; i < D; i++) {
      if (bit & (1 << i)) {
        sum += p.at(i) * (i + 1) * 100 + c.at(i);
        num += p.at(i);
      }
    }
    if (sum >= G)
      res = min(res, num);
    else {
      for (int i = D - 1; i >= 0; i--) {
        if (bit & (1 << i)) continue;
        for (int j = 0; j < p.at(i); j++) {
          if (sum >= G) break;
          sum += 100 * (i + 1);
          num++;
        }
      }
      res = min(res, num);
    }
  }

  cout << res << endl;
}