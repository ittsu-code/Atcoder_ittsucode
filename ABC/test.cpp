#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  map<int, int> Map;
  for (int i = 0; i < N; i++) {
    Map[A.at(i)]++;
  }

  int ans = 0;
  for (auto p : Map) {
    auto key = p.first;
    auto value = p.second;
    if (value != key) {
      if (key < value)
        ans += value - key;
      else
        ans += value;
    }
  }

  cout << ans << endl;
}