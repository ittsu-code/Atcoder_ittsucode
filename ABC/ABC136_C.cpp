#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> H(N);
  for (int i = 0; i < N; i++)
    cin >> H.at(i);

  int maxv = -1;
  for (int i = 0; i < N - 1; i++)
  {
    if (H.at(i) < H.at(i + 1))
      H.at(i + 1)--;
    if (H.at(i) - H.at(i + 1) >= 1)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
