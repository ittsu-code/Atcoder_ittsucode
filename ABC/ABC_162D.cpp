#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  string S;
  cin >> S;

  long long cntR = 0, cntG = 0, cntB = 0;
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'R')
      cntR++;
    else if (S.at(i) == 'G')
      cntG++;
    else
      cntB++;
  }

  long long cntFirst = cntR * cntG * cntB;

  long long cntSecond = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if (S.at(i) == S.at(j)) continue;
      int k = j * 2 - i;
      if (k >= N || S.at(k) == S.at(i) || S.at(k) == S.at(j)) continue;
      ++cntSecond;
    }
  }

  cout << cntFirst - cntSecond << endl;
}