#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    sort(S.begin(), S.end());

    if (S.at(0) == 'd' && S.at(1) == 'd' && S.at(2) == 'e' && S.at(3) == 'e' &&
        S.at(4) == 'i' && S.at(5) == 'n' && S.at(6) == 'n' && S.at(7) == 'o' &&
        S.at(8) == 'w')
      cout << "Yes" << endl;

    else
      cout << "No" << endl;
  }
}