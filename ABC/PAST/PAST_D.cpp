#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int len = S.size();

  int tot = 0;
  set<char> StOne;
  for (int i = 0; i < len; i++) {
    StOne.insert(S.at(i));
    StOne.insert('.');
  }
  tot += StOne.size();

  set<string> StTwo;
  for (int i = 0; i < len - 1; i++) {
    string A = S.substr(i, 2);
    string B = S.substr(i, 1);
    string C = S.substr(i + 1, 1);
    StTwo.insert(A);
    StTwo.insert(B + '.');
    StTwo.insert('.' + C);
  }
  if (len >= 2) tot += StTwo.size() + 1;

  set<string> StThree;
  for (int i = 0; i < len - 2; i++) {
    string A = S.substr(i, 3);
    string B = S.substr(i, 1);
    string C = S.substr(i + 1, 1);
    string D = S.substr(i + 2, 1);
    StThree.insert(A);
    StThree.insert(B + '.' + '.');
    StThree.insert('.' + C + '.');
    StThree.insert('.' + "." + D);
    StThree.insert(B + C + '.');
    StThree.insert(B + '.' + D);
    StThree.insert('.' + C + D);
  }
  if (len >= 3) tot += StThree.size() + 1;

  cout << tot << endl;
}