#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  long long X, A, B;
  cin >> X;

  for (int i = -200; i <= 200; i++) {
    for (int j = -200; j <= 200; j++) {
      if (X == (pow(i, 5) - pow(j, 5))) {
        A = i;
        B = j;
        break;
      }
    }
  }

  cout << A << ' ' << B << endl;
}