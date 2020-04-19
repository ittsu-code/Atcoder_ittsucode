#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;

  vector<int> t(N);
  for (int i = 0; i < N; i++) cin >> t.at(i);

  int tot = T;
  for (int i = 0; i < N - 1; i++) {
    tot += min(T, t.at(i + 1) - t.at(i));
  }

  cout << tot << endl;
}