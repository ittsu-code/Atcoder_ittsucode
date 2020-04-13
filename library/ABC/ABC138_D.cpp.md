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


# :warning: ABC/ABC138_D.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#902fbdd2b1df0c4f70b4a5d23525e932">ABC</a>
* <a href="{{ site.github.repository_url }}/blob/master/ABC/ABC138_D.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-13 21:31:16+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  vector<int> ans(S.size());
  int cnt = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == 'L') {
      ans.at(i) += cnt / 2;
      ans.at(i - 1) += (cnt + 1) / 2;
      cnt = 0;
    } else
      cnt++;
  }

  reverse(S.begin(), S.end());
  reverse(ans.begin(), ans.end());

  cnt = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == 'R') {
      ans.at(i) += cnt / 2;
      ans.at(i - 1) += (cnt + 1) / 2;
      cnt = 0;
    } else
      cnt++;
  }

  reverse(ans.begin(), ans.end());

  for (int i = 0; i < S.size(); i++) {
    if (i != S.size() - 1)
      cout << ans.at(i) << ' ';
    else
      cout << ans.at(i) << endl;
  }
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "ABC/ABC138_D.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  vector<int> ans(S.size());
  int cnt = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == 'L') {
      ans.at(i) += cnt / 2;
      ans.at(i - 1) += (cnt + 1) / 2;
      cnt = 0;
    } else
      cnt++;
  }

  reverse(S.begin(), S.end());
  reverse(ans.begin(), ans.end());

  cnt = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == 'R') {
      ans.at(i) += cnt / 2;
      ans.at(i - 1) += (cnt + 1) / 2;
      cnt = 0;
    } else
      cnt++;
  }

  reverse(ans.begin(), ans.end());

  for (int i = 0; i < S.size(); i++) {
    if (i != S.size() - 1)
      cout << ans.at(i) << ' ';
    else
      cout << ans.at(i) << endl;
  }
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

