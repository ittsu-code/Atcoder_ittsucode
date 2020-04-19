#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  bool gray = false;
  bool brown = false;
  bool green = false;
  bool light_blue = false;
  bool blue = false;
  bool yellow = false;
  bool orange = false;
  bool red = false;
  int free = 0;
  for (int i = 0; i < N; i++) {
    if (A.at(i) <= 399)
      gray = true;
    else if (A.at(i) >= 400 && A.at(i) <= 799)
      brown = true;
    else if (A.at(i) >= 800 && A.at(i) <= 1199)
      green = true;
    else if (A.at(i) >= 1200 && A.at(i) <= 1599)
      light_blue = true;
    else if (A.at(i) >= 1600 && A.at(i) <= 1999)
      blue = true;
    else if (A.at(i) >= 2000 && A.at(i) <= 2399)
      yellow = true;
    else if (A.at(i) >= 2400 && A.at(i) <= 2799)
      orange = true;
    else if (A.at(i) >= 2800 && A.at(i) <= 3199)
      red = true;
    else
      free++;
  }

  int tot = gray + brown + green + light_blue + blue + yellow + orange + red;
  cout << tot << ' ' << tot + free << endl;
}