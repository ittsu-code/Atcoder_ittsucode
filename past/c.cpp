#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(6);
  for (int i = 0; i < 6; i++) cin >> A.at(i);

  sort(A.begin(), A.end());
  cout << A.at(3) << endl;
}
