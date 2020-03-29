#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<pair<int, int>> P(N);

  for (int i = 0; i < N; i++) {
    int a;
    int b;
    cin >> a >> b;
    P.at(i) = make_pair(a, b);
  }

  vector<vector<string>> O(Q, vector<string>(N));

  for (int i = 0; i < Q; i++) {
    for (int j = 0; j < N; j++) {
      cin >> O.at(i).at(j);
    }
  }

  for (int i = 0; i < Q; i++) {
    int tot = 0;
    if (O.at(i).at(0) == "bake") {
      for (int j = 1; j < N; j++) {
        int X = stoi(O.at(i).at(j));
        X += P.at(j).second;
      }
    } else if (O.at(i).at(0) == "buy") {
      for (int j = 1; j < N; j++) {
        int X = stoi(O.at(i).at(j));
        if (X > P.at(j).second) {
          cout << -1 << endl;
          continue;
        }
        X -= P.at(j).second;
        tot += X * P.at(j).first;
      }
    }
    if (tot != 0) cout << tot << endl;
  }
}