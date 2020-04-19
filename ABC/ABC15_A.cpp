#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  string s;
  string t;

  for (int i = 0; i < N; i++) {
    if (s.substr(i) == t.substr(0, N - i)) {
      cout << N + i << endl;
      return 0;
    }
  }
}