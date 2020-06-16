#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  queue<int> que;
  for (int i = 1; i < 10; i++) que.push(i);
  for (int i = 0; i < N - 1; i++) {
    int s = que.front();
    que.pop();

    que.push(s * 10 + s % 10);
  }

  cout << que.front() << endl;
}