#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  multiset<char> Cube;
  for (int i = 0; i < S.size() - 1; i++) Cube.insert(S.at(i));
  cout << min(Cube.count('0'), Cube.count('1')) * 2 << endl;
}