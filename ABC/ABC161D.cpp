
#include <bits/stdc++.h>
using namespace std;

void rec(int d, long long val, vector<long long> &all) {
  if (d == 10) return;

  for (int j = -1; j <= 1; j++) {
    all.push_back(val);
    int add = (val % 10) + j;
    if (add >= 0 && add <= 9) rec(d + 1, val * 10 + add, all);
    all.pop_back();
  }
}

int main() {
  int K;
  cin >> K;
  vector<long long> all;
  for (int i = 1; i < 10; i++) rec(1, i, all);

  sort(all.begin(), all.end());

  cout << all.at(K - 1) << endl;
}
