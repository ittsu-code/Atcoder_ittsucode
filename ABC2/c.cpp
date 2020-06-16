#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  double x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  cout << abs((x2 - x1) * (y3 - y1) - (y2 - y1) * (x2 - x1)) / 2 << endl;
}