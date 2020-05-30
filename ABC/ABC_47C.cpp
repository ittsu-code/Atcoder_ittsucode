#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  int ans = 0;
  for (int i = 0; i < N.size(); i++)
    if (N.at(i) != N.at(i + 1)) ans++;

  cout << ans << endl;
}