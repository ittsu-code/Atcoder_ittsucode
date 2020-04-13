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


# :warning: ABC/ABC121_C.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#902fbdd2b1df0c4f70b4a5d23525e932">ABC</a>
* <a href="{{ site.github.repository_url }}/blob/master/ABC/ABC121_C.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-13 21:31:16+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<pair<int, int>> p(N);
  for (int i = 0; i < N; i++) {
    int a;
    int b;
    cin >> a >> b;
    p.at(i) = make_pair(a, b);
  }

  sort(p.begin(), p.end());

  int cnt = N;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    int a;
    int b;
    tie(a, b) = p.at(i);
    if (cnt > b) {
      cnt -= b;
      ans += a * b;
    } else {
      ans += cnt * a;
      break;
    }
  }

  cout << ans << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "ABC/ABC121_C.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<pair<int, int>> p(N);
  for (int i = 0; i < N; i++) {
    int a;
    int b;
    cin >> a >> b;
    p.at(i) = make_pair(a, b);
  }

  sort(p.begin(), p.end());

  int cnt = N;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    int a;
    int b;
    tie(a, b) = p.at(i);
    if (cnt > b) {
      cnt -= b;
      ans += a * b;
    } else {
      ans += cnt * a;
      break;
    }
  }

  cout << ans << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

