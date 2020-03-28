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


# :warning: ABC/ABC115_C.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#902fbdd2b1df0c4f70b4a5d23525e932">ABC</a>
* <a href="{{ site.github.repository_url }}/blob/master/ABC/ABC115_C.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-28 10:21:45+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  int INF = -1;
  vector<int> dp(N.size());
  for (int i = 0; i < N.size(); ++i) dp.at(i) = INF;

  dp.at(0) = 0;
  dp.at(1) = 1;

  for (int i = 2; i < N.size(); i++) {
    if (dp.at(i - 1) != dp.at(i - 2) && (N.at(i) != N.at(i)))
      dp.at(i) = dp.at(i - 1) + 1;
    else if (N.at(i) == N.at(i) && (N.at(i) == N.at(i)))
      dp.at(i) = dp.at(i - 1) + 1;
    else
      dp.at(i) = dp.at(i - 1);
  }

  cout << dp.at(N.size() - 1) << endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "ABC/ABC115_C.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  int INF = -1;
  vector<int> dp(N.size());
  for (int i = 0; i < N.size(); ++i) dp.at(i) = INF;

  dp.at(0) = 0;
  dp.at(1) = 1;

  for (int i = 2; i < N.size(); i++) {
    if (dp.at(i - 1) != dp.at(i - 2) && (N.at(i) != N.at(i)))
      dp.at(i) = dp.at(i - 1) + 1;
    else if (N.at(i) == N.at(i) && (N.at(i) == N.at(i)))
      dp.at(i) = dp.at(i - 1) + 1;
    else
      dp.at(i) = dp.at(i - 1);
  }

  cout << dp.at(N.size() - 1) << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

