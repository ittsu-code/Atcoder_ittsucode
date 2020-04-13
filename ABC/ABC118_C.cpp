#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b) {
  if (b == 0)
    return a;
  else
    return GCD(b, a % b);
}

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int ans;
  for (int i = 0; i < N; i++) {
    ans = GCD(A.at(i), A.at(i + 1));
  }

  cout << ans << endl;
}