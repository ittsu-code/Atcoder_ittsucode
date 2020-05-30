#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  deque<int> B;
  for (int i = 0; i < N; i++) {
    if (N % 2 == 0 && i % 2 == 0)
      B.push_back(A.at(i));
    else if (N % 2 == 0 && i % 2 == 1)
      B.push_front(A.at(i));
    if (N % 2 == 1 && i % 2 == 0)
      B.push_front(A.at(i));
    else if (N % 2 == 1 && i % 2 == 1)
      B.push_back(A.at(i));
  }

  for (int i = 0; i < N; i++) cout << B.at(i) << ' ';
  cout << endl;
}
