#include <bits/stdc++.h>
using namespace std;

int main() {
  long long A, B, C;
  cin >> A >> B >> C;

  vector X = {A, B, C};
  sort(X.begin(), X.end());
  if (X.at(0) % 2 == 0 || X.at(1) % 2 == 0 || X.at(2) % 2 == 0)
    cout << 0 << endl;
  else
    cout << ((X.at(2) + 1) * X.at(0) * X.at(1) * 4) -
                (X.at(0) * X.at(1) * X.at(2) * 4)
         << endl;
}