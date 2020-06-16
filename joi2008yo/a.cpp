#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int change = 1000 - N;

  int cnt = 0;
  while (change >= 500) {
    change -= 500;
    cnt++;
  }
  while (change >= 100) {
    change -= 100;
    cnt++;
  }
  while (change >= 50) {
    change -= 50;
    cnt++;
  }
  while (change >= 10) {
    change -= 10;
    cnt++;
  }
  while (change >= 5) {
    change -= 5;
    cnt++;
  }
  while (change >= 1) {
    change -= 1;
    cnt++;
  }

  cout << cnt << endl;
}