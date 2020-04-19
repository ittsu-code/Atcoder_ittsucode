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


# :warning: ABC/ABC98_B.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#902fbdd2b1df0c4f70b4a5d23525e932">ABC</a>
* <a href="{{ site.github.repository_url }}/blob/master/ABC/ABC98_B.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-19 18:37:09+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int func(string s, string t) {
  int ans = 0;
  for (char c = 'a'; c < 'z'; c++) {
    bool founds = false, foundt = false;
    for (int i = 0; i < s.length(); i++) {
      if (s.at(i) == c) {
        founds = true;
      }
    }
    for (int i = 0; i < t.length(); i++) {
      if (t.at(i) == c) {
        foundt = true;
      }
    }
    if (founds && foundt) ans++;
  }
  return ans;
}

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  int ans = 0;
  for (int i = 0; i < N; i++) {
    int tmp = func(S.substr(0, i), S.substr(i));
    ans = max(ans, tmp);
  }

  cout << ans << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "ABC/ABC98_B.cpp"
#include <bits/stdc++.h>
using namespace std;

int func(string s, string t) {
  int ans = 0;
  for (char c = 'a'; c < 'z'; c++) {
    bool founds = false, foundt = false;
    for (int i = 0; i < s.length(); i++) {
      if (s.at(i) == c) {
        founds = true;
      }
    }
    for (int i = 0; i < t.length(); i++) {
      if (t.at(i) == c) {
        foundt = true;
      }
    }
    if (founds && foundt) ans++;
  }
  return ans;
}

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  int ans = 0;
  for (int i = 0; i < N; i++) {
    int tmp = func(S.substr(0, i), S.substr(i));
    ans = max(ans, tmp);
  }

  cout << ans << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

