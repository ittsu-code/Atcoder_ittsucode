#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int X, Y;
  cin >> X >> Y;

  for (int i = 0; i <= X; i++) {
    if ((i * 2 + (X - i) * 4) == Y) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}