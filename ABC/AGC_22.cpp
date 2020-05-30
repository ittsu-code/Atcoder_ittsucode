#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string S;
  cin >> S;

  vector<int> cnt(26);
  for (int i = 0; i < S.size(); i++) {
    cnt.at(S.at(i) - 'a')++;
  }

  char C;
  for (int i = 0; i < 26; i++) {
    if (cnt.at(i) == 0) C = 'a' + cnt.at(i);
  }

  if (S.size() < 26)
    cout << S + C << endl;
  else if (S == "zyxwvutsrqponmlkjihgfedcba")
    cout << -1 << endl;
  else
    for (int i = 0; i < S.size(); i++) {
      if (S.at(i) + 1 < S.at(i + 1)) {
        cout << S.at(i) + 1 << endl;
        break;
      } else
        cout << S.at(i) << endl;
    }
}