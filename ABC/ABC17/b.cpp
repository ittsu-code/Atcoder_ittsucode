#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string X;
  cin >> X;

  bool flag = true;
  for (int i = 0; i < X.size(); i++) {
    if (X.at(i) == 'c') {
      if (i + 1 > X.size()) continue;
      if (X.at(i + 1) != 'h') flag = false;
    } else if (X.at(i) == 'h') {
      if (i - 1 <= 0) continue;
      if (X.at(i - 1) != 'c') flag = false;
    } else if (X.at(i) != 'o' && X.at(i) != 'k' && X.at(i) != 'u') {
      flag = false;
    }
  }

  if (flag)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}