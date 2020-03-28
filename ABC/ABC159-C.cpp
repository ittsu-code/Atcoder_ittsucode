#include <bits/stdc++.h>
using namespace std;

long long choose2(long long n) { return n * (n - 1) / 2; }

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);
  for (int i = 0; i < N; i++) A.at(i)--;
  vector<int> cnt(N);
  for (int i = 0; i < N; i++) cnt.at(A.at(i))++;

  long long total = 0;
  for (int i = 0; i < N; i++) {
    total += choose2(cnt.at(i));
  }
  for (int i = 0; i < N; i++) {
    long long ans = total;
    ans -= choose2(cnt.at(A.at(i)));
    ans += choose2(cnt.at(A.at(i)) - 1);
    cout << ans << endl;
  }
}