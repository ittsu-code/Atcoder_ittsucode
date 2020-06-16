#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N, K;
  cin >> N >> K;

  vector<long long> a(N);
  vector<long long> b(N);

  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
    cin >> b.at(i);
  }

  priority_queue<long long, vector<long long>, greater<long long>> pq;
  for (int i = 0; i < N; i++) pq.push(a.at(i));

  long long tot = 0;
  for (int i = 0; i < K; i++) {
    tot += pq.top();
    pq.pop;
  }
}