#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  cin >> K;

  queue<int> L;
  for (int i = 1; i <= 9; i++) {
    L.push(i);
  }

  int ans;
  for (int i = 0; i <= K; i++) {
    ans = L.front();
    L.pop();
    if (ans % 10 != 0) L.push(10 * ans + (ans % 10));
    L.push(10 * ans);
    if (ans % 10 != 1) L.push(10 * ans + (ans % 10));
  }

  cout << ans << endl;
}