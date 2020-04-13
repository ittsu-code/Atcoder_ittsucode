#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  vector<int> ans(S.size());
  int cnt = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == 'L') {
      ans.at(i) += cnt / 2;
      ans.at(i - 1) += (cnt + 1) / 2;
      cnt = 0;
    } else
      cnt++;
  }

  reverse(S.begin(), S.end());
  reverse(ans.begin(), ans.end());

  cnt = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == 'R') {
      ans.at(i) += cnt / 2;
      ans.at(i - 1) += (cnt + 1) / 2;
      cnt = 0;
    } else
      cnt++;
  }

  reverse(ans.begin(), ans.end());

  for (int i = 0; i < S.size(); i++) {
    if (i != S.size() - 1)
      cout << ans.at(i) << ' ';
    else
      cout << ans.at(i) << endl;
  }
}