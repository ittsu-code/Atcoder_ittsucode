#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> B(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    B.at(i) = A.at(i);
  }
  sort(B.begin(), B.end());
  int a = B.at((N / 2) - 1);
  int b = B.at((N / 2));

  for (int i = 0; i < N; i++) {
    if (A.at(i) < b)
      cout << a << endl;
    else
      cout << b << endl;
  }
}