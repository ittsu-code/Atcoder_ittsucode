#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int CountOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int N;
  cin >> N;

  if (N == 1) {
    cout << "Not Prime" << endl;
    return 0;
  }

  bool flag = true;
  for (int i = 2; i * i < N; i++) {
    if (N % i == 0) {
      flag = false;
      break;
    }
  }

  if (flag) {
    cout << "Prime" << endl;
    return 0;
  }

  flag = true;
  if (N % 10 == 0 || N % 10 == 2 || N % 10 == 4 || N % 10 == 5 || N % 10 == 6 ||
      N % 10 == 8)
    flag = false;
  if (CountOfDigits(N) % 3 == 0) flag = false;

  if (flag)
    cout << "Prime" << endl;
  else
    cout << "Not Prime" << endl;
}
