#include <bits/stdc++.h>
using namespace std;

long long total(long long a, long long b, long long c) {
  long long sum = a;
  sum -= a / b;
  sum -= a / c;
  sum += a / (b / __gcd(b, c) * c);
  return sum;
}

int main() {
  long long A, B, C, D;
  cin >> A >> B >> C >> D;
  cout << total(B, C, D) - total(A - 1, C, D) << endl;
}
