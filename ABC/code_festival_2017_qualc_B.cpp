#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int tot = 1;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    tot *= (i + 1);
  }

  int cnt = 0;
  for (int i = 0; i < N; i++) {
    if (A.at(i) % 2 == 0)
      cnt += 2;
    else
      cnt++;
  }

  cout << tot - pow(2, cnt) << endl;
}
