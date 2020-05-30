#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  int X = stoi(N.substr(N.size() - 1));

  if (X == 2 || X == 4 || X == 5 || X == 7 || X == 9)
    cout << "hon" << endl;
  else if (X == 0 || X == 1 || X == 6 || X == 8)
    cout << "pon" << endl;
  else
    cout << "bon" << endl;
}