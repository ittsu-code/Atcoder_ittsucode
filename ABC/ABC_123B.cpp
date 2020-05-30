#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, A, B, C, D, E;
  cin >> N >> A >> B >> C >> D >> E;

  long long Neck = min({A, B, C, D, E});
  long long ans = 4;

  cout << ans + ceil((N + Neck - 1) / Neck) << endl;
}