#include <bits/stdc++.h>
using namespace std;

vector<bool> seen;
vector<int> first_order;
vector<int> last_order;
void dfs(const Graph& G, int v, int& first_ptr, int& last_ptr) {
  first_order[v] = first_ptr++;

  seen[v] = true;

  for (auto next_v : G[v]) {
    if (seen[next_v]) continue;
    dfs(G, next_v, first_ptr, last_ptr);
  }

  last_order[v] = last_ptr++;
}

int main() {
  int n, u, k, v;
  cin >> n;

  vector<vector<int>> G(n, vector<int>(n, 0));

  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    u--;
    for (int j = 0; j < k; j++) {
      cin >> v;
      v--;
      G.at(u).at(v) = 1;
    }
  }

  seen.assign(n, false);
  first_order.resize(n);
  last_order.resize(n);
  int first_ptr = 0, last_ptr = 0;
  dfs(G, 1, first_ptr, last_ptr);

  for (int v = 0; v < n; ++v)
    cout << v << ' ' << first_order[v] << ' ' << last_order[v] << endl;
}