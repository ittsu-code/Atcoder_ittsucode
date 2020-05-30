#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  int tot = 0;
  int index;
  for (int i = 0; i < N; i++) {
    tot += i;
    index = i;
    if (tot >= N) break;
  }

  int Exclusion = tot - N;

  for (int i = 1; i < index; i++) {
    if (i != index) cout << i << endl;
  }
}
