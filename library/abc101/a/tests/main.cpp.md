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
<script type="text/javascript" src="../../../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../../../assets/css/copy-button.css" />


# :warning: abc101/a/tests/main.cpp

<a href="../../../../index.html">Back to top page</a>

* category: <a href="../../../../index.html#0daaa8d0faf82c8b0e2e8bce8bcd854d">abc101/a/tests</a>
* <a href="{{ site.github.repository_url }}/blob/master/abc101/a/tests/main.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-28 16:36:07+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> L(N * 2);
  for (int i = 0; i < N * 2; i++) cin >> L.at(i);
  sort(L.begin(), L.end());

  int ans = 0;
  for (int i = 0; i < 2 * N - 1; i += 2) {
    ans += min(L.at(i), L.at(i + 1));
  }

  cout << ans << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "abc101/a/tests/main.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> L(N * 2);
  for (int i = 0; i < N * 2; i++) cin >> L.at(i);
  sort(L.begin(), L.end());

  int ans = 0;
  for (int i = 0; i < 2 * N - 1; i += 2) {
    ans += min(L.at(i), L.at(i + 1));
  }

  cout << ans << endl;
}

```
{% endraw %}

<a href="../../../../index.html">Back to top page</a>

