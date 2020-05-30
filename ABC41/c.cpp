#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> A(N);
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a;
    b = i;
    A.at(i) = make_pair(a, b)
  }

  sort(A.begin(), A.end());
  reverse(A.begin(), A.end());

  for (int i = 0; i < N; i++) {
    int a, b;
    tie(a, b) = A.at(i);
    cout << b + 1 << endl;
  }
}
