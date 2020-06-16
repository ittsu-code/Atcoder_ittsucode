#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string s, t;
  cin >> s, t;

  if (s.at(0) == t.at(0) && s.at(1) == t.at(1) && s.at(2) == t.at(2))
    cout << "same" << endl;
  else if (upperCase(s.at(0)) == upperCase(t.at(0)) &&
           upperCase(s.at(1)) == upperCase(t.at(1)) &&
           upperCase(s.at(2)) == upperCase(t.at(2)))
    cout << "case-insensitive" << endl;
  else
    cout << "different" << endl;
}