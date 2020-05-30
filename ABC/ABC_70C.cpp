#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<long long> T(N);
  for (int i = 0; i < N; i++) {
    cin >> T.at(i);
  }

  long long ans = T.at(0);
  for (int i = 1; i < N; i++) {
    ans = ans / __gcd(ans, T.at(i)) * T.at(i);
  }

  cout << ans << endl;
}