#include <bits/stdc++.h>
using namespace std;

int CountOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum++;
    n /= 10;
  }
  return sum;
}

int main() {
  long long A, B, X;
  cin >> A >> B >> X;

  vector<long long> C(100000000);
  for (long long i = 0; i < 100000000; i++) {
    C.at(i) = A * i + B * CountOfDigits(i);
  }

  auto ans = lower_bound(C.begin(), C.end(), X);
  ans = ans--;
  cout << *ans << endl;
}