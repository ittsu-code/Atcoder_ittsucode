#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  cin >> A.at(0);

  for (int i = 1; i < N; i++) {
    cin >> A.at(i);
    if (A.at(i - 1) < A.at(i))
      cout << "up " << A.at(i) - A.at(i - 1);
    else if (A.at(i - 1) > A.at(i))
      cout << "down " << A.at(i - 1) - A.at(i);
    else
      cout << "stay" << endl;
  }
}