#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  int q;
  cin >> q;

  string command, str2;
  int a, b;
  for (int i = 0; i < q; i++) {
    cin >> command >> a >> b;

    if (command == "print") {
      cout << str.substr(a, b - a + 1) << endl;
    } else if (command == "reverse") {
      string str3 = str.substr(a, b - a + 1);
      reverse(str3.begin(), str3.end());
      str = str.substr(0, a) + str3 + str.substr(b + 1, str.size() - a - 1);
    } else if (command == "replace") {
      cin >> str2;
      str = str.substr(0, a) + str2 + str.substr(b + 1, str.size() - a - 1);
    }
  }
}