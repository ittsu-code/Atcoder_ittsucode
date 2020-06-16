#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  int sz = N.size();

  int odd = 0;
  int even = 0;
  for (int i = 1; i <= sz; i++) {
    if (sz % 2 == 0)
      odd += stoi(N.at(i));
    else
      even += stoi(N.at(i));
  }

  if (sz % 2 == 1) swap(odd, even);
  cout << even << ' ' << odd << endl;
}