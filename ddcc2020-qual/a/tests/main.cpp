#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;

  int tot = 0;
  if (X == 1 && Y == 1) {
    cout << 1000000 << endl;
    return 0;
  }

  if (X == 1)
    tot += 300000;
  else if (X == 2)
    tot += 200000;
  else if (X == 3)
    tot += 100000;

  if (Y == 1)
    tot += 300000;
  else if (Y == 2)
    tot += 200000;
  else if (Y == 3)
    tot += 100000;

  cout << tot << endl;
}