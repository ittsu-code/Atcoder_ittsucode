#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<vector<char>> List(N, vector<char>(N, 'N'));

  for (int i = 0; i < Q; i++) {
    int a, b, c;
    cin >> a >> b;
    b--;
    if (a == 1) {
      cin >> c;
      c--;
    }

    if (a == 1) {
      List.at(b).at(c) = 'Y';
    } else if (a == 2) {
      for (int j = 0; j < N; j++) {
        if (List.at(j).at(b) == 'Y') List.at(b).at(j) = 'Y';
      }
    } else {
      vector<int> F;
      for (int k = 0; k < N; k++) {
        if (List.at(b).at(k) == 'Y' && b != k) F.push_back(k);
      }
      for (int x : F) {
        for (int l = 0; l < N; l++) {
          if (List.at(x).at(l) == 'Y') List.at(b).at(l) = 'Y';
        }
      }
      F.clear();
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << List.at(i).at(j);
    }
    cout << endl;
  }
}
