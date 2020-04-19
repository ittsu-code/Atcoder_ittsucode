#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  int tot = 0;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    tot += A.at(i);
  }

  sort(A.begin(), A.end());

  for (int i = 0; i < N; i++) {
    if (tot % 10 != 0) break;
    if (A.at(i) % 10 != 0) tot -= A.at(i);
  }

  if (tot % 10 != 0)
    cout << 0 << endl;
  else
    cout << tot << endl;
}