#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string S, T;
  cin >> S >> T;
  int sz = S.size();

  bool flag = true;
  for (int i = 0; i < sz; i++) {
    if (S.at(i) == T.at(i))
      continue;
    else if (S.at(i) == '@' &&
             (T.at(i) == 'a' || T.at(i) == 't' || T.at(i) == 'c' ||
              T.at(i) == 'o' || T.at(i) == 'd' || T.at(i) == 'e' ||
              T.at(i) == 'r' ||))
      continue;
    else if (T.at(i) == '@' &&
             (S.at(i) == 'a' || S.at(i) == 't' || S.at(i) == 'c' ||
              S.at(i) == 'o' || S.at(i) == 'd' || S.at(i) == 'e' ||
              S.at(i) == 'r' ||))
      continue;
    flag = false;
  }

  if (flag)
    cout << "You can win" << endl;
  else
    cout << "You will lose" << endl;
}