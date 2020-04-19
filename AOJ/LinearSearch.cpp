#include <bits/stdc++.h>
using namespace std;

int search(vector<int> A, int n, int key) {
  int i = 0;
  A.push_back(key);
  while (A.at(i) != key) i++;
  return 0;
}

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int M;
  cin >> M;

  int sum = 0;
  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> B.at(i);
    if (search(A, N, B.at(i))) sum++;
  }

  cout << sum << endl;
}