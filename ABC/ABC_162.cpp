#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int tot;
  for (int i = 1; i <= N; i++) {
    if (i != 3 || i != 5) tot += i;
  }

  cout << tot << endl;
}