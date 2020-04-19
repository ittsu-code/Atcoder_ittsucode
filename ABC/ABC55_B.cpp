#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  long long ans = 1;
  for (int i = 1; i <= N; i++) {
    ans *= i;
    ans /= 10000000007
  }

  cout << ans << endl;
}