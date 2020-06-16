#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D, E, F, G, H;
  cin >> A >> B >> C >> D;
  int S = A + B + C + D;

  cin >> E >> F >> G >> H;
  int T = E + F + G + H;

  cout << max(S, T) << endl;
}