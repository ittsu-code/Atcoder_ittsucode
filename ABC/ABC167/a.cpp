#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string S, T;
  cin >> S >> T;

  if (T.substr(0, T.size() - 1) == S)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}