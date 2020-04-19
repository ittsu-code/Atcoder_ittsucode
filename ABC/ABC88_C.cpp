#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> C(3, vector<int>(3));

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> C.at(i).at(j);
    }
  }

  vector<int> X;
  vector<int> Y;
  X.at(0) = 0;
  for (int i = 0; i < 3; i++) Y.at(i) = C.at(0).at(i) - X.at(0);
  for (int i = 0; i < 3; i++) X.at(i) = C.at(i).at(0) - Y.at(0);

  bool good = true;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (X.at(i) + Y.at(j) != C.at(i).at(j)) good = false;
    }
  }

  if (good)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}