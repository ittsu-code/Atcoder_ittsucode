#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  int cnt = 0;
  bool flag[9] = false;
  for (int i = 0; i < N; i++) {
    string x;
    cin >> x;
    for (int j = 0; j < 9; j++) {
      if (x.at(j) == 'o' && !flag[j]) {
        cnt++;
        flag[j] = true;
      }
      if (x.at(j) == 'x') {
        cnt++;
        flag[j] = false
      }
      if (x.at(j) == '.') flag[j] = false;
    }
  }

  cout << cnt << endl;
}
