#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  for (int i = 0; i < N.size(); i++) N.at(i) = toupper(N.at(i));

  int count = 0;
  while (1) {
    string S;
    cin >> S;
    if (S == "END_OF_TEXT") break;
    for (int i = 0; i < S.size(); i++) S.at(i) = toupper(S.at(i));
    if (N == S) count++;
  }

  cout << count << endl;
}