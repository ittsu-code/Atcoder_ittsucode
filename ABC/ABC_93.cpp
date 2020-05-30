#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 2, 0);
  for (int i = 1; i < N + 1; i++) cin >> A.at(i);

  long long time = 0;
  for (int i = 0; i < N + 2; i++) time += A.at(i + 1) - A.at(i);

  for (int i = 0; i < N; i++) {
    long long ans = time;
    ans += abs(A.at(i + 2) - A.at(i)) - abs(A.at(i + 1) - A.at(i)) -
           abs(A.at(i) - A.at(i));
    cout << ans << endl;
  }
}