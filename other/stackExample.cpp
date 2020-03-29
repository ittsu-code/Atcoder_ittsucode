#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> S;

  S.push(3);
  S.push(5);
  S.push(7);

  cout << S.size() << endl;
  cout << S.top << endl;
  S.pop();

  cout << S.top() << endl;
  S.pop();

  S.push(9);
  cout << S.top << endl;

  S.push(11);
  S.pop();
  S.pop();
  cout << S.top << endl;

  S.pop();
  cout << (S.empty() ? "empty" : "not empty") << endl;
}