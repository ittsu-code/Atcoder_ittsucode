#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int res = 0;
  while (true) {
    if (*max_element(A.begin(), A.end()) == 0) break;

    int i = 0;
    while (i < N) {
      if (A.at(i) == 0)
        i++;
      else {
        res++;
        while (i < N && A.at(i) > 0) {
          A.at(i)--;
          i++;
        }
      }
    }
  }

  cout << res << endl;
}