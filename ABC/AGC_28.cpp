#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  string S, T;
  cin >> S >> T;

  int ans = N / gcd(N, M) * M;
  int SLen = ans / M;
  int TLen = ans / N;

  cout << N / gcd(N, M) * M << endl;
}
