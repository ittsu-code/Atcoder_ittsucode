#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> Vec(N);
  for (int i = 0; i < Q; i++) {
    int cmd, t, x;
    cin >> cmd;
    if (cmd == 0) {
      cin >> t >> x;
      Vec.push_back(t);
    }
  }
}