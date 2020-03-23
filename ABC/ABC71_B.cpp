#include <bits/stdc++.h>
using namespace std;

int main()
{
  string N;
  cin >> N;

  vector<int> cnt(123);
  for (int i = 0; i < N.size(); i++)
  {
    cnt.at(N.at(i))++;
  }

  for (int i = 97; i < 123; i++)
  {
    if (cnt.at(i) == 0)
    {
      char ans = i;
      cout << ans << endl;
      return 0;
    }
  }
  cout << "None" << endl;
}