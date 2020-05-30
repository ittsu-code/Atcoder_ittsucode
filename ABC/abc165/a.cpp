#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, A, B;
  cin >> K >> A >> B;

  bool flag = false;
  for (int i = 1; i <= 100; i++) {
    if (K * i >= A && K * i <= B) flag = true;
  }

  if (flag)
    cout << "OK" << endl;
  else
    cout << "NG" << endl;
}