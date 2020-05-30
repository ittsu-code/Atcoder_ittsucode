#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  vector<int> Vec;
  for (int i = 0; i < N; i++) {
    int command;
    int ele;

    cin >> command;
    if (command == 0) {
      cin >> ele;
      Vec.push_back(ele);
    } else if (command == 1) {
      cin >> ele;
      cout << Vec.at(ele) << endl;
    } else if (command == 2) {
      Vec.pop_back();
    }
  }
}