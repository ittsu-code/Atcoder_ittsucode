#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string s;
  int k;

  cin >> s >> k;
  set<string> Set;

  if (s.size() - k < 0) {
    cout << 0 << endl;
    return 0;
  }

  for (int i = 0; i < s.size() - k; i++) {
    Set.insert(s.substr(i, min(s.size(), k)));
  }

  cout << Set.size() << endl;
}