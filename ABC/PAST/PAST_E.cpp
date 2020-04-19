#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);

  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    A.at(i)--;
  }

  for (int i = 0; i < N; i++) {
    int cnt = 1;
    vector<int> B = {A};
    while (true) {
      if (B.at(i) == i) break;
      B.at(i) = B.at(B.at(i));
      cnt++;
    }
    cout << cnt << endl;
  }
}