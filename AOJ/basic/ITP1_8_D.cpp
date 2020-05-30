#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, p;
  cin >> s >> p;

  string s2 = s + s;

  bool flag = false;
  for (int i = 0; i < s2.size(); i++) {
    if (s2.substr(i, p.size()) == p) flag = true;
  }

  if (flag)
    cout << "Yes" << endl;
  else
    cout << "NO" << endl;
}