#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  cout << fixed << setprecision(5);
  cout << sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) << endl;
}