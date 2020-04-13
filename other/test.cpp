#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  vector<int> num = {A, B, C};
  sort(num.begin(), num.end());

  int ans = 0;
  if ((num.at(2) * 2 - num.at(1) - num.at(0)) % 2 == 0)
    ans = num.at(2) Z - num.at(1) - num.at(0) / 2;
  else
    ans = num.at(2) * 2 - num.at(1) - num.at(0) + 3 / 2;

  cout << ans << endl;
}