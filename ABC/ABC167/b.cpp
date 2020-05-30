#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int A, B, C, K;
  cin >> A >> B >> C >> K;

  if (A + B >= K)
    cout << min(A, K) << endl;
  else
    cout << A - min(C, (K - A - B)) << endl;
}
