#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int a = 0;
  int b = 0;
  int c = 0;

  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == 'a')
      a++;
    else if (S.at(i) == 'b')
      b++;
    else
      c++;
  }

  if (a > b && a > c)
    cout << 'a' << endl;
  else if (b > a && b > c)
    cout << 'b' << endl;
  else if (c > a && c > b)
    cout << 'c' << endl;
}