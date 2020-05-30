#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  int sz = N.size();

  int cnt = 0;
  for (int i = 0; i < sz; i++) {
    for (int j = 4; j <= sz - i; j++) {
      int64_t X = stoll(N.substr(i, j));
      if (X % 2019LL == 0) {
        cnt++;
      }
    }
  }

  cout << cnt << endl;
}