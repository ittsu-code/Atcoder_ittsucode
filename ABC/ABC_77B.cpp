#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);
  vector<int> B(N);
  for (int i = 0; i < N; i++) cin >> B.at(i);
  vector<int> C(N);
  for (int i = 0; i < N; i++) cin >> C.at(i);

  sort(A.begin(), A.end());
  sort(C.begin(), C.end());

  long long ans = 0;
  for (int i = 0; i < N; i++) {
    long long a = lower_bound(A.begin(), A.end(), B.at(i)) - A.begin();
    long long b = C.end() - upper_bound(C.begin(), C.end(), B.at(i));
    ans += a * b;
  }

  cout << ans << endl;
}