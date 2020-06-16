#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  long long tot = 0;
  for (int i = 0; i < N; i++) {
    tot += A.at(i) * pow(2, N - i - 1);
  }

  cout << tot << endl;
}
