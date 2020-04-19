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


# :warning: AOJ/a.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#58a9d597b8071bcb332aab0f39b15887">AOJ</a>
* <a href="{{ site.github.repository_url }}/blob/master/AOJ/a.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-19 18:37:09+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;

  while (true) {
    cin >> N >> M;
    if (N == 0 && M == 0) return 0;
    int ans = 0;
    for (int i = 1; i <= N - 2; i++) {
      for (int j = i + 1; j <= N - 1; j++) {
        for (int k = j + 1; k <= N; k++) {
          if (i + j + k == M) ans++;
        }
      }
    }

    cout << ans << endl;
  }
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "AOJ/a.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;

  while (true) {
    cin >> N >> M;
    if (N == 0 && M == 0) return 0;
    int ans = 0;
    for (int i = 1; i <= N - 2; i++) {
      for (int j = i + 1; j <= N - 1; j++) {
        for (int k = j + 1; k <= N; k++) {
          if (i + j + k == M) ans++;
        }
      }
    }

    cout << ans << endl;
  }
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

