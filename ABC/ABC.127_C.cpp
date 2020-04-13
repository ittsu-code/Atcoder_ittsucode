#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<pair<int, int>> p(M);
  for (int i = 0; i < M; i++) {
    int a;
    int b;
    cin >> a >> b;
    p.at(i) = make_pair(a, b);
  }

  int maxv = -1;
  int minv = 1000001;
  for (int i = 0; i < M; i++) {
    int a;
    int b;
    tie(a, b) = p.at(i);
    minv = (a, minv);
    maxv = (b, maxv);
  }

  cout << maxv - minv << endl;
}