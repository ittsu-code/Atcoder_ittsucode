#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  string N;
  int K;
  cin >> N >> K;

  N.at(K) = tolower(N.at(K));
  cout << N << endl;
}