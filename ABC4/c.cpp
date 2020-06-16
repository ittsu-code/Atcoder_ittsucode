#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  vector<int> C = {1, 2, 3, 4, 5, 6};

  for (int i = 0; i < N; i++) {
    swap(C.at(i % 5 + 1), C.at(i % 5 + 2));
  }

  for (int i = 0; i < 6; i++) cout << C.at(i) << endl;
}