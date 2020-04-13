#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, K;
  cin >> N >> K;

  if (N < abs(N - K)) {
    cout << N << endl;
    return 0;
  } else {
    long long X = (N + K - 1) / K;
    cout << abs(N - (X * K)) << endl;
  }
}