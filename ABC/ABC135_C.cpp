#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<long long> A(N + 1);
  for (int i = 0; i < N + 1; i++) cin >> A.at(i);
  vector<long long> B(N);
  for (int i = 0; i < N; i++) cin >> B.at(i);

  long long tot = 0;
  for (int i = 0; i < N; i++) {
    tot += min(A.at(i), B.at(i));
    tot += min(A.at(i + 1), B.at(i) - min(A.at(i), B.at(i)));
    A.at(i + 1) -= min(A.at(i + 1), B.at(i) - min(A.at(i), B.at(i)));
  }

  cout << tot << endl;
}