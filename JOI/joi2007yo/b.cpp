#include <bits/stdc++.h>
using namespace std;

int main() {
  int A;

  vector<int> cnt(30);
  for (int i = 0; i < 28; i++) {
    cin >> A;
    A--;
    cnt.at(A)++;
  }

  for (int i = 0; i < 30; i++) {
    if (cnt.at(i) == 0) cout << i + 1 << endl;
  }
}