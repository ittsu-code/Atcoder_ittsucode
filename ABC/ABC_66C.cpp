#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  long long cnt = 1;
  for (int i = 1; i <= N; i++) {
    cnt *= i;
    cnt %= 1000000007;
  }

  vector<long long> A;
  for (int i = 1; i * i <= cnt; i++) {
    if (cnt % i == 0) A.push_back(i);
    if (cnt / i != i) A.push_back(cnt / i);
  }

  long long ans = 0;
  for (int i = 0; i < A.size(); i++) {
    ans += A.at(i);
  }

  cout << ans << endl;
}