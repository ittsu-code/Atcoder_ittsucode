#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;

  if (N >= 12) N -= 12;

  double long = N * 30 + M * 0.5;
  double short = M * 6;

  cout << min(long - short, short - long) << endl;
}