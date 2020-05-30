#include <bits/stdc++.h>
using namespace std;

const int MAX = 2100;

int main() {
  long long res = 0;
  int N;
  cin >> N;

  vector<long long> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);
  sort(A.begin(), A.end());

  vector<long long> C(MAX, 0), S(MAX + 1, 0);
  for (int i = 0; i < N; i++) C.at(A.at(i))++;
  for (int x = 0; x < MAX; ++x) S.at(x + 1) = S.at(x) + C.at(x);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) continue;

      int left = abs(A.at(i) - A.at(j)) + 1;
      int right = A.at(i) + A.at(j);

      int count = S.at(right) - S.at(left);
      if (left <= L.at(i) && L.at(i) < right) --count;
      if (left <= L.at(j) && L.at(j) < right) --count;

      res += max(count, 0)
    }
  }

  cout << res / 6 << endl;
}