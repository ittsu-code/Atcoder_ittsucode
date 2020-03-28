#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int n = floor(sqrt(N));
  int W;
  for (int i = n; i <= 1; i--) {
    if (N % i == 0) {
      W = i;
      break;
    }
  }

  H = N / W;
  cout << W + H - 2 << endl;
}
