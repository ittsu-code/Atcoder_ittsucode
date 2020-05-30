#include <bits/stdc++.h>
using namespace std;

int CountOfDigits(int64_t n) {
  int sum = 0;
  while (n > 0) {
    sum++;
    n /= 10;
  }
  return sum;
}

int main() {
  int64_t N;
  cin >> N;

  int ans = CountOfDigits(N);

  for (int i = 1; i * i <= N; i++) {
    if (N % i != 0) continue;
    const int64_t j = N / i;
    const int cur = abs(CountOfDigits(i) - CountOfDigits(j));

    if (ans > cur) {
      ans = max(CountOfDigits(i), CountOfDigits(j));
    }
  }
  cout << ans << endl;
}
