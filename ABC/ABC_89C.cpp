#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<char, int> mp;
  mp['M'] = 0, mp['A'] = 0, mp['R'] = 0, mp['C'] = 0, mp['H'] = 0;
  for (int i = 0; i < N; i++) {
    string str;
    cin >> str;
    char c = str.at(0);

    if (c == 'M' || c == 'A' || c == 'R' || c == 'C' || c == 'H') mp.at(c)++;
  }

  vector<int> A(5);
  for (int i = 0; i < 5; i++) A.at(0) = i;

  long long ans = 0;
  do {
    for (int i = 0; i < 5; i++) ans +=
  } while (next_permutation(A.begin(), A.end()));
  cout << ans << endl;
}