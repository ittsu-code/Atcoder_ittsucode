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
<script type="text/javascript" src="../../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../../assets/css/copy-button.css" />


# :warning: ABC/PAST/PAST_C.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#0b05f116f77b6cceb12d0d210b54a202">ABC/PAST</a>
* <a href="{{ site.github.repository_url }}/blob/master/ABC/PAST/PAST_C.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-19 18:37:09+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int H;
  cin >> H;
  int W = 2 * H - 1;

  vector<vector<char>> S(H, vector<char>(W));

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> S.at(i).at(j);
    }
  }

  const vector<int> Hi = {1, 1, 1};
  const vector<int> Wi = {-1, 0, 1};

  for (int i = H - 1; i >= 0; i++) {
    for (int j = 0; j < W; j++) {
      if (S.at(i).at(j) == '.' || S.at(i).at(j) == '#') continue;

      if (S.at(i).at(j) == 'X') {
        for (int d = 0; d < 3; d++) {
          const int ni = i + Hi.at(d);
          const int nj = j + Wi.at(d);

          if (ni < 0 or H <= ni) continue;
          if (nj < 0 or W <= nj) continue;
          if (S.at(ni).at(nj) == '#') S.at(ni).at(nj) = 'X';
        }
      }
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cout << S.at(i).at(j);
      if (j == W - 1) cout << endl;
    }
  }
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "ABC/PAST/PAST_C.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int H;
  cin >> H;
  int W = 2 * H - 1;

  vector<vector<char>> S(H, vector<char>(W));

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> S.at(i).at(j);
    }
  }

  const vector<int> Hi = {1, 1, 1};
  const vector<int> Wi = {-1, 0, 1};

  for (int i = H - 1; i >= 0; i++) {
    for (int j = 0; j < W; j++) {
      if (S.at(i).at(j) == '.' || S.at(i).at(j) == '#') continue;

      if (S.at(i).at(j) == 'X') {
        for (int d = 0; d < 3; d++) {
          const int ni = i + Hi.at(d);
          const int nj = j + Wi.at(d);

          if (ni < 0 or H <= ni) continue;
          if (nj < 0 or W <= nj) continue;
          if (S.at(ni).at(nj) == '#') S.at(ni).at(nj) = 'X';
        }
      }
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cout << S.at(i).at(j);
      if (j == W - 1) cout << endl;
    }
  }
}

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>

