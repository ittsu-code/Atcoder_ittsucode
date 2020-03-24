#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> D(N);
  for (int i = 0; i < N; i++)
    cin >> D.at(i);
  map<int, int> mpa;
  for (int i = 0; i < N; i++)
    mpa[D.at(i)]++;

  int M;
  cin >> M;
  vector<int> T(M);
  for (int i = 0; i < M; i++)
    cin >> T.at(i);
  map<int, int> mpb;
  for (int i = 0; i < M; i++)
    mpb[T.at(i)]++;

  for (int i = 0; i < M; i++)
  {
    int x = T.at(i);
    if (mpa[x] < mpb[x])
    {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
}
