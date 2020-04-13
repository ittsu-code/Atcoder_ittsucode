#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);

  vector<pair<int, int>> p(N);
  for (int i = 0; i < N; i++) {
    A.at(i) = i + 1;
    int a;
    int b;
    cin >> a >> b;
    p.at(i) = make_pair(a, b);
  }

  do {
  } while (next_permutation(A.begin(), A.end()));
}