#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  int sz = S.size();

  if (N >= S)
    cout << S << endl;
  else
    cout << S.substr(0, N) << "..." << endl;
}