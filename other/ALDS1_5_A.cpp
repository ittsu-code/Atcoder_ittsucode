#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int M;
  cin >> M;
  vector<int> B(M);
  for (int i = 0; i < M; i++) cin >> B.at(i);

  for (int tmp = 0; tmp < (1 << 20); tmp++) {
    bitset<20> s(tmp);

    int sum = 0;
    for (int i = 0; i < M; i++) {
      bool ans = false;
      for (int j = 0; j < N; j++) {
        if (s.test(j)) {
          sum += A.at(j);
        }
        if (sum == B.at(i)) {
          ans = true;
        }
      }
      if (ans)
        cout << "yes" << endl;
      else
        cout << "no" << endl;
    }
  }
}
