#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> A(M);
  for (int i = 0; i < M; i++) cin >> A.at(i);

  int front_cnt = 0;
  int back_cnt = 0;
  for (int i = 0; i < M; i++) {
    if (A.at(i) < X)
      front_cnt++;
    else
      back_cnt++;
  }

  cout << min(front_cnt, back_cnt) << endl;
}