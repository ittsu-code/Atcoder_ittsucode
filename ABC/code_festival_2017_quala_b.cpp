#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, K;
  cin >> N >> M >> K;

  bool flag = false;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (i * (M - j) + (N - i) * j == K) flag = true;
    }
  }

  flag == true ? cout << "Yes" << endl : cout << "No" << endl;
}