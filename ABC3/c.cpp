#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> R(N);
  for (int i = 0; i < N; i++) cin >> R.at(i);

  sort(R.begin(), R.end());
  vector<int> C;
  for (int i = 0; i < K; i++) {
    C.push_back(R.at(R.size() - 1 - i));
  }

  sort(C.begin(), C.end());
  double Rate = 0;
  for (int i = 0; i < K; i++) {
    Rate = (Rate + C.at(i)) / 2;
  }

  cout << Rate << endl;
}