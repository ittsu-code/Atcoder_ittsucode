#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

void dfs(vector<int> &A) {
  if (A.size() == N) {
    // 処理
    return;
  }

  for (int v = 0; v < M; ++v) {
    A.push_back(v);
    dfs(A);
    A.pop_back();
  }
}

int main() {
  vector<int> A;
  dfs(A);
}