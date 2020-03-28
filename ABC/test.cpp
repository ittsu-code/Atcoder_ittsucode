#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  int findID = -1;
  int maxv = -1;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    if (maxv < A.at(i)) findID = i;
    maxv = max(maxv, A.at(i));
  }

  sort(A.begin(), A.end());

  for (int i = 0; i < N; i++) {
    if (findID = i)
      cout << A.at(N - 1) << endl;
    else
      cout << A.at(N) << endl;
  }
}