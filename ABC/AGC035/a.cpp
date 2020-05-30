#include <bits/stdc++.h>
using namespace std;

int CountOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum *= 10;
    sum %= 2;
    n /= 2;
  }
  return sum;
}

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> B(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    CountOfDigits(A.at(i));
  }

  for (int i = 0; i < N; i++) {
    B.at(i) = A.at(i) XOR A.at(i + 1);
  }
}