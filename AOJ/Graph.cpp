#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int n, u, k, v;
  cin >> n;

  Graph G(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      G.at(i).at(j) = 0;
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    u--;
    for (int j = 0; j < k; j++) {
      cin >> v;
      v--;
      G.at(i).at(j) = 1;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j) cout << ' ';
      cout << G.at(i).at(j);
    }
    cout << endl;
  }
}