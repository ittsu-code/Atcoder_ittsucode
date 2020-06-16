#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string S;
  cin >> S;

  bool check = false;
  int index = 0;
  int len = 0;
  vector<string> Str;
  for (int i = 0; i < S.size(); i++) {
    if (isupper(S.at(i)) && check) {
      string W = S.substr(index, len + 1);
      W.at(len) = tolower(W.at(len));
      Str.push_back(W);
      len = 0;
      check = false;
    } else if (isupper(S.at(i))) {
      index = i;
      len++;
      check = true;
    } else {
      len++;
    }
  }

  sort(Str.begin(), Str.end());
  for (int i = 0; i < Str.size(); i++) {
    cout << Str.at(i);
  }
  cout << endl;
}
