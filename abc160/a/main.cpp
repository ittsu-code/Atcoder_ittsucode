#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  if (N.at(2) == N.at(3) && N.at(3) == N.at(4))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}