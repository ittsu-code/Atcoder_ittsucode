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


# :warning: ddcc2020-qual/a/tests/main.cpp

<a href="../../../../index.html">Back to top page</a>

* category: <a href="../../../../index.html#0cc9184f7de4320cd76a528036cbfe9e">ddcc2020-qual/a/tests</a>
* <a href="{{ site.github.repository_url }}/blob/master/ddcc2020-qual/a/tests/main.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-28 16:36:07+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;

  int tot = 0;
  if (X == 1 && Y == 1) {
    cout << 1000000 << endl;
    return 0;
  }

  if (X == 1)
    tot += 300000;
  else if (X == 2)
    tot += 200000;
  else if (X == 3)
    tot += 100000;

  if (Y == 1)
    tot += 300000;
  else if (Y == 2)
    tot += 200000;
  else if (Y == 3)
    tot += 100000;

  cout << tot << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "ddcc2020-qual/a/tests/main.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;

  int tot = 0;
  if (X == 1 && Y == 1) {
    cout << 1000000 << endl;
    return 0;
  }

  if (X == 1)
    tot += 300000;
  else if (X == 2)
    tot += 200000;
  else if (X == 3)
    tot += 100000;

  if (Y == 1)
    tot += 300000;
  else if (Y == 2)
    tot += 200000;
  else if (Y == 3)
    tot += 100000;

  cout << tot << endl;
}

```
{% endraw %}

<a href="../../../../index.html">Back to top page</a>

