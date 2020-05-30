#include <bits/stdc++.h>
using namespace std;

int main() {
  string A, B, C;
  cin >> A >> B >> C;

  queue<char> a;
  for (int i = 0; i < A.size(); i++) a.push(A.at(i));
  queue<char> b;
  for (int i = 0; i < B.size(); i++) b.push(B.at(i));
  queue<char> c;
  for (int i = 0; i < C.size(); i++) c.push(C.at(i));

  char turn = 'a';
  while (true) {
    if (turn == 'a') {
      if (a.empty()) break;
      turn = a.front;
      a.pop();
    } else if (turn == 'b') {
      if (b.empty()) break;
      turn = b.front;
      b.pop();
    } else {
      if (c.empty()) break;
      turn = c.front;
      c.pop();
    }
  }

  if (turn == 'a')
    cout << 'A' << endl;
  else if (turn == 'b')
    cout << 'B' << endl;
  else
    cout << 'C' << endl;
}