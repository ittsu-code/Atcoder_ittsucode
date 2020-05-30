#include <bits/stdc++.h>
using namespace std;

vector<int> IntegerToVector(int bit, int N) {
  vector<int> S;
  for (int i = 0; i < N; i++) {
    if (bit & (1 << i)) {
      S.push_back(i);
    }
  }
  return S;
}

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) cin >> a.at(i);

  bool exist = false;
  for (int bit = 0; bit < (1 << N); bit++) {
    vector<int> S = IntegerToVector(bit, N);

    int sum = 0;
    for (int i : S) sum += a.at(i);

    if (sum == W) exist = true;
  }

  if (exist)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}