#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<char>> A(N, vector<char>(N));
  vector<vector<char>> B(M, vector<char>(M));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A.at(i).at(j);
    }
  }

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < M; j++) {
      cin >> B.at(i).at(j);
    }
  }

  bool flag = false;
  for (int i = 0; i < M; i++) {
    if (i > N) continue;
    for (int j = 0; j < M; j++) {
      if (j > N) continue;
      if (A.at(i).at(j) != B.at(i).at(j)) continue;
      flag = ture;
    }
  }

  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}