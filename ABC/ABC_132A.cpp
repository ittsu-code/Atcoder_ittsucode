#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string N;
  cin >> N;

  set<char> set;
  for (char i : N) {
    set.insert(N.at(i));
  }

  if (set.size() == 2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}