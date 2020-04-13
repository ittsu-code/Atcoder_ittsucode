#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int tot = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < N; k++) {
        tot += __gcd(__gcd(i, j), k);
      }
    }
  }

  cout << tot << endl;
}