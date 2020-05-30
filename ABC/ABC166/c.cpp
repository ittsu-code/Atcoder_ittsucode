#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, M;
  cin >> N >> M;

  vector<long long> H(N);
  for (int i = 0; i < N; i++) cin >> H.at(i);

  set<long long> Set;
  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A >> B;
    A--;
    B--;
    if (H.at(A) < H.at(B))
      Set.insert(A);
    else if (H.at(A) > H.at(B))
      Set.insert(B);
    else {
      Set.insert(A);
      Set.insert(B);
    }
  }

  cout << N - Set.size() << endl;
}
