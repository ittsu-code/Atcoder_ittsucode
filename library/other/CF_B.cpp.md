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


# :warning: other/CF_B.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#795f3202b17cb6bc3d4b771d8c6c9eaf">other</a>
* <a href="{{ site.github.repository_url }}/blob/master/other/CF_B.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-28 10:21:45+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> D(N);
  for (int i = 0; i < N; i++) cin >> D.at(i);
  map<int, int> mpa;
  for (int i = 0; i < N; i++) mpa[D.at(i)]++;

  int M;
  cin >> M;
  vector<int> T(M);
  for (int i = 0; i < M; i++) cin >> T.at(i);
  map<int, int> mpb;
  for (int i = 0; i < M; i++) mpb[T.at(i)]++;

  for (int i = 0; i < M; i++) {
    int x = T.at(i);
    if (mpa[x] < mpb[x]) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "other/CF_B.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> D(N);
  for (int i = 0; i < N; i++) cin >> D.at(i);
  map<int, int> mpa;
  for (int i = 0; i < N; i++) mpa[D.at(i)]++;

  int M;
  cin >> M;
  vector<int> T(M);
  for (int i = 0; i < M; i++) cin >> T.at(i);
  map<int, int> mpb;
  for (int i = 0; i < M; i++) mpb[T.at(i)]++;

  for (int i = 0; i < M; i++) {
    int x = T.at(i);
    if (mpa[x] < mpb[x]) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

