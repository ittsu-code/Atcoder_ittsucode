#include <bits/stdc++.h>
using namespace std;

template <typename T>
bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;  // aをbで更新
    return true;
  }
  return false;
}

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  vector<int> s(N + 1, 0);  // s[0] = 0 になる
  for (int i = 0; i < N; ++i) s.at(i + 1) = s.at(i) + A.at(i);

  int maxv = -1;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      chmax(maxv, s.at(min(N, i + j)) - s.at(j));
    }
    cout << maxv << endl;
  }
}