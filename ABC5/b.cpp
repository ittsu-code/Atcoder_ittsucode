#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  map<string, int> mp;
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    if (mp.count(S)) {
      mp.at(S)++;
    } else {
      mp[s] = 1;
    }
  }

  int cnt = 0;
  string ans;
  for (string x : mp) {
    if (cnt < mp.at(x)) {
      cnt = mp.at(x);
      ans = x;
    }
  }

  cout << ans << endl;
}