#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  long long N;
  cin >> N;

  int M = sqrt(N);
  for (int i = 0; i < M; i++) {
    if (N % i == 0) cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
}