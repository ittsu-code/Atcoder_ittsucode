#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int tot = 0;
  vector<int> A(N);
  for (int i = 1; i <= N; i++) tot += i;

  for (int i = 2; i * i <= tot; i++) {
    if (tot == 1) {
      cout << "BOWBOW" << endl;
      return 0;
    }
    if (tot % i == 0) {
      cout << "BOWBOW" << endl;
      return 0;
    }
  }

  cout << "WANWAN" << endl;
}