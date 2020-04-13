---
layout: default
---

<!-- mathjax config similar to math.stackexchange -->
<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML">
</script>
<script type="text/x-mathjax-config">
  MathJax.Hub.Config({
    TeX: { equationNumbers: { autoNumber: "AMS" }},
    tex2jax: {
      inlineMath: [ ['$','$'] ],
      processEscapes: true
    },
    "HTML-CSS": { matchFontHeight: false },
    displayAlign: "left",
    displayIndent: "2em"
  });
</script>

<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/jquery-balloon-js@1.1.2/jquery.balloon.min.js" integrity="sha256-ZEYs9VrgAeNuPvs15E39OsyOJaIkXEEt10fzxJ20+2I=" crossorigin="anonymous"></script>
<script type="text/javascript" src="../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../assets/css/copy-button.css" />


# :warning: other/BFS_practice.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#795f3202b17cb6bc3d4b771d8c6c9eaf">other</a>
* <a href="{{ site.github.repository_url }}/blob/master/other/BFS_practice.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-13 21:31:16+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> field;

bool seen[510][510];
void dfs(int h, int w) {
  seen[h][w] = true;
  for (int dir = 0; dir < 4; dir++) {
    int nh = h + dx[dir];
    int nw = w + dy[dir];

    if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
    if (field[nh][nw] == '#') continue;

    if (seen[nh][nw]) continue;

    dfs(nh, nw);
  }
}

int main() {
  cin >> H >> W;
  field.resize(H);
  for (int h = 0; h < H; h++) cin >> field[h];

  int sh, sw, gh, gw;
  for (int h = 0; h < H; h++) {
    for (int w = 0; w < W; w++) {
      if (field[h][w] == 's') sh = h, sw = w;
      if (field[h][w] == 'g') gh = h, gw = w;
    }
  }

  memset(seen, 0, sizeof(seen));
  dfs(sh, sw);

  if (seen[gh][gw])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "other/BFS_practice.cpp"
#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> field;

bool seen[510][510];
void dfs(int h, int w) {
  seen[h][w] = true;
  for (int dir = 0; dir < 4; dir++) {
    int nh = h + dx[dir];
    int nw = w + dy[dir];

    if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
    if (field[nh][nw] == '#') continue;

    if (seen[nh][nw]) continue;

    dfs(nh, nw);
  }
}

int main() {
  cin >> H >> W;
  field.resize(H);
  for (int h = 0; h < H; h++) cin >> field[h];

  int sh, sw, gh, gw;
  for (int h = 0; h < H; h++) {
    for (int w = 0; w < W; w++) {
      if (field[h][w] == 's') sh = h, sw = w;
      if (field[h][w] == 'g') gh = h, gw = w;
    }
  }

  memset(seen, 0, sizeof(seen));
  dfs(sh, sw);

  if (seen[gh][gw])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

