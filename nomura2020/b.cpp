#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int H1, M1, H2, M2, K;
  cin >> H1 >> M1 >> H2 >> M2 >> K;

  int S = H1 * 60 + M1;
  int E = H2 * 60 + M2;
  cout << E - S - K << endl;
}