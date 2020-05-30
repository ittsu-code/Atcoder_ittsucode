#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;

  while (1) {
    cin >> N;
    if (N == "0") break;
    int tot = 0;
    for (int i = 0; i < N.size(); i++) {
      int a = N.at(i) - '0';
      tot += a
    }
    cout << tot << endl;
  }
}