#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string S;
  cin >> S;

  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == 'a' || S.at(i) == 'i' || S.at(i) == 'u' || S.at(i) == 'd' ||
        S.at(i) == 'e')
      continue;
    else
      cout << S.at(i);
  }
  cout << endl;
}