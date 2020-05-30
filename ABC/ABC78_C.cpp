#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  int a, b, c;
  for (int i = 0; i < N.size(); i++) {
    if (N.at(i) == 'a')
      a++;
    else if (N.at(i) == 'b')
      b++;
    else
      c++;
  }

  int minv = N.size() / 3;
  if (a != minv && a != minv + 1)
    cout << "No" << endl;
  else if (b != minv && b != minv + 1)
    cout << "No" << endl;
  else if (c != minv && c != minv + 1)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}