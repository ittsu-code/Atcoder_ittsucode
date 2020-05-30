#include <bits/stdc++.h>
#define sz(x) (int)(x).size()
#define pcnt __builtin_popcount
#define uni(x) x.erase(unique(rng(x)), x.end())
#define snuke srand((unsigned)clock() + (unsigned)time(NULL));
#define df(x) int x = in()
#define dame    \
  {             \
    puts("-1"); \
    return 0;   \
  }
#define show(x) cout << #x << " = " << x << endl;
#define PQ(T) priority_queue<T, vector<T>, greater<T>>
#define bn(x) ((1 << x) - 1)
#define newline puts("")
#define v(T) vector<T>
#define vv(T) vector<vector<T>>
using namespace std;
typedef long long int ll;
typedef unsigned uint;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<P> vp;
inline int in() {
  int x;
  scanf("%d", &x);
  return x;
}
inline void priv(vi a) {
  rep(i, sz(a)) printf("%d%c", a[i], i == sz(a) - 1 ? '\n' : ' ');
}
template <typename T>
istream& operator>>(istream& i, vector<T>& v) {
  rep(j, sz(v)) i >> v[j];
  return i;
}
template <typename T>
string join(const vector<T>& v) {
  stringstream s;
  rep(i, sz(v)) s << ' ' << v[i];
  return s.str().substr(1);
}
template <typename T>
ostream& operator<<(ostream& o, const vector<T>& v) {
  if (sz(v)) o << join(v);
  return o;
}
template <typename T1, typename T2>
istream& operator>>(istream& i, pair<T1, T2>& v) {
  return i >> v.fi >> v.se;
}
template <typename T1, typename T2>
ostream& operator<<(ostream& o, const pair<T1, T2>& v) {
  return o << v.fi << "," << v.se;
}
const int MX = 100005, INF = 1001001001;
const ll LINF = 1e18;
const double eps = 1e-10;

int main() {
  string s;
  cin >> s;
  int n = sz(s);
  int ans = INF;
  for (char c = 'a'; c <= 'z'; ++c) {
    vector<int> a(n);
    rep(i, n) a[i] = s[i] == c;
    while (a != vi(sz(a), 1)) {
      vi p(sz(a) - 1);
      swap(a, p);
      rep(i, sz(a)) a[i] = p[i] | p[i + 1];
    }
    mins(ans, n - sz(a));
  }
  cout << ans << endl;
  return 0;
}
