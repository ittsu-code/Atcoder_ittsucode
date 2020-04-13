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


# :warning: abc161/d.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#16bdd910d1ce66bcccae077af611e602">abc161</a>
* <a href="{{ site.github.repository_url }}/blob/master/abc161/d.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-13 21:31:16+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  cin >> K;

  queue<int> L;
  for (int i = 1; i <= 9; i++) {
    L.push(i);
  }

  int ans;
  for (int i = 0; i <= K; i++) {
    ans = L.front();
    L.pop();
    if (ans % 10 != 0) L.push(10 * ans + (ans % 10));
    L.push(10 * ans);
    if (ans % 10 != 1) L.push(10 * ans + (ans % 10));
  }

  cout << ans << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "abc161/d.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  cin >> K;

  queue<int> L;
  for (int i = 1; i <= 9; i++) {
    L.push(i);
  }

  int ans;
  for (int i = 0; i <= K; i++) {
    ans = L.front();
    L.pop();
    if (ans % 10 != 0) L.push(10 * ans + (ans % 10));
    L.push(10 * ans);
    if (ans % 10 != 1) L.push(10 * ans + (ans % 10));
  }

  cout << ans << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

