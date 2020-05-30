#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  vector<int> A;
  for (int i = 1; i * i < N; i++) {
    if (N % i == 0) {
      A.push_back(i);
      if (i != N / i) A.push_back(N / i);
    }
  }
  sort(A.begin(), A.end());

  int ans = 0;
  for (int i = 0; i < A.size() - 1; i++) {
    ans += A.at(i);
  }

  if (ans == N)
    cout << "Perfect" << endl;
  else if (ans > N)
    cout << "Abundant" << endl;
  else if (ans < N)
    cout << "Deficient" << endl;
}