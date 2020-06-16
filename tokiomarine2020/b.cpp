#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  long long A, V;
  cin >> A >> V;
  long long B, W;
  cin >> B >> W;
  long long T;
  cin >> T;

  long long dist = abs(A - B);
  long long speed = (V - W);
  if (speed * T - dist >= 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}