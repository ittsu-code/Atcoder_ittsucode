#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<string> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  set<string> Set;
  for (int i = 0; i < N; i++) Set.insert(A.at(i));
  cout << Set.size() << endl;
}