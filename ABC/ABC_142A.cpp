#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  double div = N;
  if (N % 2 == 0)
    div /= 2;
  else
    div = (div + 1) / 2;

  cout << fixed << setprecision(6);
  cout << div / N << endl;
}