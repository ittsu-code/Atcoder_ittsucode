#include <bits/stdc++.h>
using namespace std;

bool check(const string &S) {
  stack<int> st;
  vector<pair<int, int>> ps;

  for (int i = 0; i < (int)S.size(); i++) {
    if (S.at(i) == '(')
      st.push(i);
    else {
      if (st.empty()) {
        cout << "error" << endl;
        return false;
      }
      int t = st.top();
      st.pop();
      ps.push_back({t, i});
    }
  }

  if (!st.empty()) {
    cout << "too many (" << endl;
    return false;
  }

  sort(ps.begin(), ps.end());
  for (int i = 0; i < (int)ps.size(); i++) {
    if (i) cout << ",";
    cout << "(" << ps.at(i).first << "," << ps.at(i).second << ")";
  }
  cout << endl;
  return true;
}

int main() {
  check("((()())())");
  check("())");
  check("(())");
}