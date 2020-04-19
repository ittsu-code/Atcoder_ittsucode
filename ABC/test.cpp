#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int cnt4 = 0;
  int cnt2 = 0;
  int odd = 0;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    if (A.at(i) % 4 == 0)
      cnt4++;
    else if (A.at(i) % 2 == 0) {
      cnt2 = 1;
    } else
      odd++;
  }

  if (cnt2 != 0) {
    if (cnt4 >= odd - 1)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  } else {
    if (cnt4 >= odd)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}
