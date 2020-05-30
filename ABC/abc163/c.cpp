#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N, 0);
  for (int i = 1; i < N - 1; i++) cin >> A.at(i);

  vector<int> cnt(N);
  for (int i = 0; i < N; i++) {
    cnt.at(A.at(i))++;
  }

  for (int i = 0; i < N; i++) {
    cout << cnt.at(i) << endl;
  }
}