#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int s, e;

  int tot = 0;
  for (int i = 0; i < 3; i++) {
    cin >> s >> e;
    tot += s * e / 10;
  }

  cout << tot << endl;
}