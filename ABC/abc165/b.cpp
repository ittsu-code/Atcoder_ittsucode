#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  cin >> N;

  long long res = 100;

  int cnt = 0;
  while (res <= N) {
    res *= 1.01;
    cnt++;
  }

  cout << cnt << endl;
}