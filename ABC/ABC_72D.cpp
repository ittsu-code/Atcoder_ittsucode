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

  int cnt = 0;
  vector<int> F = A;
  for (int i = 0; i < N - 1; i++) {
    if (F.at(i) == i) {
      swap(F.at(i), F.at(i + 1));
      cnt++;
    }
  }

  int cnt2 = 0;
  vector<int> B = A;
  reverse(B.begin(), B.end());
  for (int i = 0; i < N - 1; i++) {
    if (B.at(i) == i) {
      swap(B.at(i), B.at(i + 1));
      cnt2++;
    }
  }

  cout << min(cnt, cnt2) << endl;
}