#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> p(N);

  for (int i = 0; i < N; i++) {
    int a;
    int b;
    cin >> a >> b;
    p.at(i) = make_pair(b, -a);
  }

  sort(p.begin(), p.end());
  reverse(p.begin(), p.end());

  int tot = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      int a;
      int b;
      tie(b, a) = p.at(j);
      if (a * (-1) - 1 <= i) {
        tot += b;
        p.erase(p.begin + j);
        break;
      }
    }
    cout << tot << endl;
  }
}
