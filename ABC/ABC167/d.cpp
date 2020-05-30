#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, K;
  cin >> N >> K;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  vector<int> s;
  vector<int> ord(N + 1, -1);
  int C = 1, L = 0;
  {
    int v = 1;
    while (ord.at(v) == -1) {
      ord.at(v) = s.size();
      s.push_back(v);
      v = A.at(v - 1);
    }
    C = s.size() - ord.at(v);
    L = ord.at(v);
  }

  if (K < L)
    cout << s.at(K) << endl;
  else {
    K -= L;
    K %= C;
    cout << s.at(L + K) << endl;
  }
}
