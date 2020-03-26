#include <bits/stdc++.h>
using namespace std;

int main()
{
  string N;
  cin >> N;

  int INF = -1;
  vector<int> dp(N.size());
  for (int i = 0; i < N.size(); ++i)
    dp.at(i) = INF;

  dp.at(0) = 0;
  dp.at(1) = 1;

  for (int i = 2; i < N.size(); i++)
  {
    if (dp.at(i - 1) != dp.at(i - 2) && (N.at(i) != N.at(i)))
      dp.at(i) = dp.at(i - 1) + 1;
    else if (N.at(i) == N.at(i) && (N.at(i) == N.at(i)))
      dp.at(i) = dp.at(i - 1) + 1;
    else
      dp.at(i) = dp.at(i - 1);
  }

  cout << dp.at(N.size() - 1) << endl;
}
