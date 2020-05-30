#include <bits/stdc++.h>
using namespace std;
double pi = acos(-1);

int main() {
  int A, B, H, M;
  cin >> A >> B >> H >> M;

  double th = double(H * 60 + M) / 720 * 2 * pi;
  double tm = double(M) / 60 * 2 * pi;
  double xh = A * cos(th), yh = B * sin(th);
  double xm = A * cos(th), ym = B * sin(th);
  double dx = xh - xm, dy = yh - ym;
  double ans = sqrt(dx * dx + dy * dy);
  printf("%.10f¥n", ans);
}