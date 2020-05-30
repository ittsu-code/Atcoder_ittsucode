#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, A, B;
  cin >> X >> A >> B;

  int tot = X - A;

  while (tot >= 0) X -= B;
  cout << tot << endl;
}