#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q, H, S, D, N;
  cin >> Q >> H >> S >> D >> N;

  int Smin = min({Q * 4, H * 2, S});
  int Dmin = min({Q * 8, H * 4, S * 2, D});

  if (N = 1)
    cout << Smin << endl;
  else if (N % 2 == 0)
    cout << Dmin * (N / 2) << endl;
  else {
    cout << Dmin * (N / 2) + Smin << endl;
  }
}