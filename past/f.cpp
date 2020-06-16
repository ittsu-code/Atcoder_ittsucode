#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string S;
  cin >> S;

  bool index = false;
  int len = 0;
  vector<string> Str;
  for (int i = 0; i < S.size(); i++) {
    if (isupper(S.at(i)) {
      if (index) {
        string W = S.substr(i, len);
        Str.push_back(W);
        len = 0;
        index = false;
      } else {
        index = true;
      }
      len++;
    }
  }
}