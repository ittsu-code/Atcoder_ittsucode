#include <bits/stdc++.h>
using namespace std;

void rec(ind d, int val, vector<int> &all) {
  all.push_back(val);
  if (d == 5) return;
  rec(d + 1, val * 10 + val % 10, all);
}

int main() {
  int N;
  cin >> N;

  for (int v = 1; v < 10; ++v) rec(1, v, all);
  sort(rec.begin(), rec.end());

  cout << all.at(N - 1) << endl;
}