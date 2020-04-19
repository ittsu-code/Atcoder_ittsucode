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


# :warning: ABC/ABC64_C.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#902fbdd2b1df0c4f70b4a5d23525e932">ABC</a>
* <a href="{{ site.github.repository_url }}/blob/master/ABC/ABC64_C.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-19 18:37:09+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  bool gray = false;
  bool brown = false;
  bool green = false;
  bool light_blue = false;
  bool blue = false;
  bool yellow = false;
  bool orange = false;
  bool red = false;
  int free = 0;
  for (int i = 0; i < N; i++) {
    if (A.at(i) <= 399)
      gray = true;
    else if (A.at(i) >= 400 && A.at(i) <= 799)
      brown = true;
    else if (A.at(i) >= 800 && A.at(i) <= 1199)
      green = true;
    else if (A.at(i) >= 1200 && A.at(i) <= 1599)
      light_blue = true;
    else if (A.at(i) >= 1600 && A.at(i) <= 1999)
      blue = true;
    else if (A.at(i) >= 2000 && A.at(i) <= 2399)
      yellow = true;
    else if (A.at(i) >= 2400 && A.at(i) <= 2799)
      orange = true;
    else if (A.at(i) >= 2800 && A.at(i) <= 3199)
      red = true;
    else
      free++;
  }

  int tot = gray + brown + green + light_blue + blue + yellow + orange + red;
  cout << tot << ' ' << tot + free << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "ABC/ABC64_C.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  bool gray = false;
  bool brown = false;
  bool green = false;
  bool light_blue = false;
  bool blue = false;
  bool yellow = false;
  bool orange = false;
  bool red = false;
  int free = 0;
  for (int i = 0; i < N; i++) {
    if (A.at(i) <= 399)
      gray = true;
    else if (A.at(i) >= 400 && A.at(i) <= 799)
      brown = true;
    else if (A.at(i) >= 800 && A.at(i) <= 1199)
      green = true;
    else if (A.at(i) >= 1200 && A.at(i) <= 1599)
      light_blue = true;
    else if (A.at(i) >= 1600 && A.at(i) <= 1999)
      blue = true;
    else if (A.at(i) >= 2000 && A.at(i) <= 2399)
      yellow = true;
    else if (A.at(i) >= 2400 && A.at(i) <= 2799)
      orange = true;
    else if (A.at(i) >= 2800 && A.at(i) <= 3199)
      red = true;
    else
      free++;
  }

  int tot = gray + brown + green + light_blue + blue + yellow + orange + red;
  cout << tot << ' ' << tot + free << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

