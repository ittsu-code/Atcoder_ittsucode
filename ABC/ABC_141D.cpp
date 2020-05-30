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
    p.at(i) = make_pair(b, a);
  }
  sort(p.begin(), p.end());

  int lmt = 0;
  bool flag = true;
  for (int i = 0; i < N; i++) {
    int a;
    int b;
    tie(b, a) = p.at(i);
    lmt += a;
    if (lmt < b) flag = false;
  }

  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}