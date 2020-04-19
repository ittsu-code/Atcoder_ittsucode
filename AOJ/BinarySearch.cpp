#include <bits/stdc++.h>
using namespace std;

bool isOK(vector<int> A, int index, int key) {
  if (A.at(index) >= key)
    return true;
  else
    return false;
}

int binary_search(vector<int> A, int key) {
  int ng = -1;
  int ok = (int)A.size();

  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;

    if (isOK(A, mid, key))
      ok = mid;
    else
      ng = mid;
  }
  return ok;
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int M;
  cin >> M;
  vector<int> B(M);
  int sum = 0;
  for (int i = 0; i < M; i++) {
    cin >> B.at(i);
    if (binary_search(A, B.at(i))) sum++;
  }

  cout << sum << endl;
}
