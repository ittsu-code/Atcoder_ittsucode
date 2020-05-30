#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int Q;
  cin >> Q;

  deque<char> d;
  for (int i = 0; i < S.size(); i++) d.push_back(S.at(i));
  bool dir = true;
  for (int i = 0; i < Q; i++) {
    int a, b;
    char c;
    cin >> a;
    if (a == 1) {
      dir = (dir == true) ? false : true;
      continue;
    }
    cin >> b >> c;
    if (dir == true && b == 1)
      d.push_front(c);
    else if (dir == true && b == 2)
      d.push_back(c);
    else if (dir == false && b == 1)
      d.push_back(c);
    else if (dir == false && b == 2)
      d.push_front(c);
  }

  if (!dir) reverse(d.begin(), d.end());
  for (int i = 0; i < d.size(); i++) cout << d.at(i);
  cout << endl;
}