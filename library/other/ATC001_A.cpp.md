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


# :warning: other/ATC001_A.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#795f3202b17cb6bc3d4b771d8c6c9eaf">other</a>
* <a href="{{ site.github.repository_url }}/blob/master/other/ATC001_A.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-28 10:21:45+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v) {
  seen[v] = true;  // v を訪問済にする

  // v から行ける各頂点 next_v について
  for (auto next_v : G[v]) {
    if (seen[next_v]) continue;  // next_v が探索済だったらスルー
    dfs(G, next_v);              // 再帰的に探索
  }
}

int main() {
  // 頂点数と辺数、s と t
  int N, M, s, t;
  cin >> N >> M >> s >> t;

  // グラフ入力受取
  Graph G(N);
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
  }

  // 頂点 s をスタートとした探索
  seen.assign(N, false);  // 全頂点を「未訪問」に初期化
  dfs(G, s);

  // t に辿り着けるかどうか
  if (seen[t])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "other/ATC001_A.cpp"
#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v) {
  seen[v] = true;  // v を訪問済にする

  // v から行ける各頂点 next_v について
  for (auto next_v : G[v]) {
    if (seen[next_v]) continue;  // next_v が探索済だったらスルー
    dfs(G, next_v);              // 再帰的に探索
  }
}

int main() {
  // 頂点数と辺数、s と t
  int N, M, s, t;
  cin >> N >> M >> s >> t;

  // グラフ入力受取
  Graph G(N);
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
  }

  // 頂点 s をスタートとした探索
  seen.assign(N, false);  // 全頂点を「未訪問」に初期化
  dfs(G, s);

  // t に辿り着けるかどうか
  if (seen[t])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

