#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    string N;
    cin >> N;
    if (N == "-") break;
    int m;
    string l;
    cin >> m;
    for (int i = 0; i < m; i++) {
      int n;
      cin >> n;
      l = N.substr(n - 1) + N.substr(0, n - 1);
    }
    cout << l << endl;
  }
}