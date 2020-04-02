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


# :warning: ABC/ABC146_C.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#902fbdd2b1df0c4f70b4a5d23525e932">ABC</a>
* <a href="{{ site.github.repository_url }}/blob/master/ABC/ABC146_C.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-03 00:06:49+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int CountOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum++;
    n /= 10;
  }
  return sum;
}

int main() {
  long long A, B, X;
  cin >> A >> B >> X;

  vector<long long> C(100000000);
  for (long long i = 0; i < 100000000; i++) {
    C.at(i) = A * i + B * CountOfDigits(i);
  }

  auto ans = lower_bound(C.begin(), C.end(), X);
  ans = ans--;
  cout << *ans << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "ABC/ABC146_C.cpp"
#include <bits/stdc++.h>
using namespace std;

int CountOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum++;
    n /= 10;
  }
  return sum;
}

int main() {
  long long A, B, X;
  cin >> A >> B >> X;

  vector<long long> C(100000000);
  for (long long i = 0; i < 100000000; i++) {
    C.at(i) = A * i + B * CountOfDigits(i);
  }

  auto ans = lower_bound(C.begin(), C.end(), X);
  ans = ans--;
  cout << *ans << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

