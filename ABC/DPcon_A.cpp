#include <bits/stdc++.h>
using namespace std;

template <typename T>
bool chmin(T &a, const T& b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

const int INF = 1001001001;

int main(){
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  vector<int> dp(N);
  for (int i = 0; i < N; ++i) dp.at(i) = INF;
  dp.at(0) = 0;
  for (int i = 1; i < N; i++){
    chmin(dp.at(i), dp.at(i - 1) + abs(A.at(i) - A.at(i - 1)));
    if( i > 1 ) chmin(dp.at(i), dp.at(i - 2) + abs(A.at(i) - A.at(i - 2)));
  }

  cout << dp.at(N-1) << endl;
}