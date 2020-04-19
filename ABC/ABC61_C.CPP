#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A;
  for (int i = 0; i < N; i++) {
    int a, b;
    int cnt = 0;
    cin >> a >> b;
    while (b == cnt) {
      A.push_back(a);
      cnt++;
    }
  }

  sort(A.begin(), A.end());
  cout << A.at(M - 1) << endl;
}