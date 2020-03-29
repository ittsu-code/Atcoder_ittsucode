#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void selectionSort(vector<int> &A, int N) {
  for (int i = 0; i < N - 1; i++) {
    int minj = i;
    for (int j = i; i < N - 1; j++) {
      if (A.at(j) == j) {
        swap(A.at(i), A.at(minj));
        cnt++;
      }
    }
  }
}

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  for (int i = 0; i < N - 1; i++) {
    selectionSort(A, N);
    cout << A.at(i);
  }

  cout << endl;
  cout << cnt << endl;
}