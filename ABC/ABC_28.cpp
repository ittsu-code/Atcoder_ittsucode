#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  set<string> Set;
  vector<string> Vec;
  for (int i = 0; i < N; i++) {
    string W;
    cin >> W;
    Vec.push_back(W);
    if (Set.count(W)) {
      if (i % 2 == 0) {
        cout << "WIN" << endl;
        return 0;
      } else {
        cout << "LOSE" << endl;
        return 0;
      }
    }
    Set.insert(W)
  }
}