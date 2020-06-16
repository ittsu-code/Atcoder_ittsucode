#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string N;
  cin >> N;

  for (int i = 0; i < N.size(); i++) {
    if (!isdigit(N.at(i))) {
      cout << "error" << endl;
      return 0;
    }
  }

  int ans = 0;
  for (int i = 0; i < N.size(); i++) {
    ans *= 10;
    ans += stoi(N.substr(i, 1));
  }

  cout << ans * 2 << endl;
}