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


# :warning: ABC/ABC71_B.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#902fbdd2b1df0c4f70b4a5d23525e932">ABC</a>
* <a href="{{ site.github.repository_url }}/blob/master/ABC/ABC71_B.cpp">View this file on GitHub</a>
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

  vector<int> cnt(123);
  for (int i = 0; i < N.size(); i++) {
    cnt.at(N.at(i))++;
  }

  for (int i = 97; i < 123; i++) {
    if (cnt.at(i) == 0) {
      char ans = i;
      cout << ans << endl;
      return 0;
    }
  }
  cout << "None" << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "ABC/ABC71_B.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  vector<int> cnt(123);
  for (int i = 0; i < N.size(); i++) {
    cnt.at(N.at(i))++;
  }

  for (int i = 97; i < 123; i++) {
    if (cnt.at(i) == 0) {
      char ans = i;
      cout << ans << endl;
      return 0;
    }
  }
  cout << "None" << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>
