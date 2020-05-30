#include <bits/stdc++.h>
using namespace std;

int main() {
  double W, H, x, y;
  cin >> W >> H >> x >> y;

  cout << fixed << setprecision(9);
  cout << (W * H) / 2 << ' ';
  if (W == 2 * x && H == 2 * y)
    cout << 1 << endl;
  else
    cout << 0 << endl;
}