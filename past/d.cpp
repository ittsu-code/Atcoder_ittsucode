#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    A.at(i)--;
  }
  vector<int> cnt(N);
  for (int i = 0; i < N; i++) {
    cnt.at(A.at(i))++;
  }

  int ans1 = -1;
  int ans2 = -1;
  for (int i = 0; i < N; i++) {
    if (cnt.at(i) == 2)
      ans1 = cnt.at(i);
    else if (cnt.at(i) == 0)
      ans2 = cnt.at(i);
  }

  if (ans1 = -1 && ans2 = -1)
    cout << "correct" << endl;
  else
    cout << ans1 << ' ' << ans2 << endl;
}