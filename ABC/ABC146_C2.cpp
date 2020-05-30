#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int CountOfDigits(long long n) {
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

  long long left = 1;
  long long right = 100000000001;

  while (right - left > 1) {
    long long mid = (left + right) / 2;
    if (mid * A + CountOfDigits(mid) * B <= X)
      left = mid;
    else
      right = mid;
  }

  cout << left << endl;
}