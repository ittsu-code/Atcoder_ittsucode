#include <bits/stdc++.h>
using namespace std;

template <typename T>
bool chmax(T& a, const T& b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

int main() {
  string s;
  cin >> s;
  int n = s.size();

  vector<int> a(n + 1);
  long long ans = 0;
  for (int i = 0; i < n; i++)
    if (s.at(i) == '<') chmax(a.at(i + 1), a.at(i) + 1);
  for (int i = n; i > 0; i--)
    if (s.at(i - 1) == '>') chmax(a.at(i - 1), a.at(i) + 1);
  for (int i = 0; i <= n; i++) ans += a.at(i);

  cout << ans << endl;
}