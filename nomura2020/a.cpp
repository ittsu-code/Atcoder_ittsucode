#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string N;
  cin >> N;

  for (int i = 0; i < N.size() - 1; i++) {
    if (N.at(i) == 'P')
      cout << 'P';
    else if (N.at(i) == 'D')
      cout << 'D';
    else if (N.at(i) == '?')
      cout << 'D';
  }
  cout << endl;
}