#include <bits/stdc++.h>
using namespace std;

int Lucas(int N) {
  if (N == 0) return 2;
  if (N == 1) return 1;

  return Lucas(N - 2) + Lucas(N - 1);
}

int main() {
  int N;
  cin >> N;

  cout << Lucas(N) << endl;
}