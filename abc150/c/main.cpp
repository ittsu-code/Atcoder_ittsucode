#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<char> P(N);
  for (int i = 0; i < N; i++) cin >> P.at(i);
  vector<char> Q(N);
  for (int i = 0; i < N; i++) cin >> Q.at(i);

  do {
    for (int i = 1; i <= N; i++) {
      cout << i;
    }
    cout << endl;
  } while (next_permutation(1, 1 + N));
}