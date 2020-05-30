#include <bits/stdc++.h>
using namespace std;
const int INF = 1000000000;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  stack<pair<int, int>> st;
  st.push({INF, 0});
  for (int i = 0; i < N; i++) {
    while (A.at(i) > st.top().first) st.pop();
    cout << st.top().second << ",";
    st.push({A.at(i), i + 1});
  }

  cout << endl;
}