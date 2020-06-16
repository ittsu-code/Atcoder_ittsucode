#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, NG1, NG2, NG3;
  cin >> N >> NG1 >> NG2 >> NG3;

  if (N == NG1 || N == NG2 || N == NG3) {
    cout << "NO" << endl;
    return 0;
  }

  int cnt = 0;
  int now = 0;
  while (now < N) {
    if (now + 3 != NG1 || now + 3 != NG2 || now + 3 != NG3) {
      now += 3;
      cnt++;
    } else if (now + 2 != NG1 || now + 2 != NG2 || now + 2 != NG3) {
      now += 2;
      cnt++;
    } else if (now + 1 != NG1 || now + 1 != NG2 || now + 1 != NG3) {
      now += 1;
      cnt++;
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }

  if (cnt <= 100)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}