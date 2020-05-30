#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int ans = 1001001001;
  for (int i = -100; i <= 100; i++) {
    int cost = 0;
    for (int j = 0; j < N; j++) {
      cost += pow((A.at(j) - i), 2);
    }
    ans = min(ans, cost);
  }

  cout << ans << endl;
}