#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, K, S;
  cin >> N >> K >> S;

  vector<long long> A(N, S + 1);
  for (int i = 0; i < K; i++) cout << S << ' ';
  for (int i = K; i < N; i++) cout << S + 1 << ' ';
  cout << endl;
}