#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    A.at(i)--;
  }

  vector<int> cnt(100000);
  for (int i = 0; i < 110000; i++) {
    cnt.at(A.at(i))++;
  }
  int ans = -1;
  for (int i = 1; i < 110000; i++) {
    ans = max(ans, cnt.at(i - 1) + cnt.at(i) + cnt.at(i + 1))
  }

  cout << ans << endl;
}