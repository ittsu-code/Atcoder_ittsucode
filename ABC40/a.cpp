#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N, X;
  cin >> N >> X;

  cout << min(X - 1, N - X) << endl;
}