#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N, K;
  cin >> N >> K;

  vector<pair<int, int>> p(N);

  for (int i = 0; i < N; i++) {
    int a;
    int b;
    cin >> a >> b;
    p.at(i) = make_pair(a, b);
  }

  sort(p.begin(), p.end());

  long long tot = 0;
  for (int i = 0; i < N; i++) {
    int a;
    int b;
    tie(a, b) = p.at(i);
    if (tot >= K) {
      cout << a << endl;
      break;
    }
  }
}