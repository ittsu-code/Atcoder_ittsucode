#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int Q, l, r;
  cin >> Q;

  int MAX = 101010;
  vector<int> is_prime(MAX, 1);
  is_prime[0] = 0, is_prime[1] = 0;
  for (int i = 2; i < MAX; i++) {
    if (!is_prime[i]) continue;
    for (int j = i * 2; j < MAX; j += i) is_prime[j] = 0;
  }

  vector<int> a(MAX, 0);
  for (int i = 0; i < MAX; i++) {
    if (i % 2 == 0) continue;
    if (is_prime[i] && is_prime[(i + 1) / 2]) a[i] = 1;
  }

  vector<int> s(MAX + 1);
  for (int i = 0; i < MAX + 1; i++) s[i + 1] = s[i] + a[i];

  vector<int> s(MAX + 1, 0);
  for (int q = 0; q < Q; q++) {
    cin >> l >> r;
    r++;

    cout << s[r] - s[l] << endl;
  }
}