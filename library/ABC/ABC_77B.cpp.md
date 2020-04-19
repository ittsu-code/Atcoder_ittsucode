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


# :warning: ABC/ABC_77B.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#902fbdd2b1df0c4f70b4a5d23525e932">ABC</a>
* <a href="{{ site.github.repository_url }}/blob/master/ABC/ABC_77B.cpp">View this file on GitHub</a>
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
  vector<int> B(N);
  for (int i = 0; i < N; i++) cin >> B.at(i);
  vector<int> C(N);
  for (int i = 0; i < N; i++) cin >> C.at(i);

  sort(A.begin(), A.end());
  sort(C.begin(), C.end());

  long long ans = 0;
  for (int i = 0; i < N; i++) {
    long long a = lower_bound(A.begin(), A.end(), B.at(i)) - A.begin();
    long long b = C.end() - upper_bound(C.begin(), C.end(), B.at(i));
    ans += a * b;
  }

  cout << ans << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "ABC/ABC_77B.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);
  vector<int> B(N);
  for (int i = 0; i < N; i++) cin >> B.at(i);
  vector<int> C(N);
  for (int i = 0; i < N; i++) cin >> C.at(i);

  sort(A.begin(), A.end());
  sort(C.begin(), C.end());

  long long ans = 0;
  for (int i = 0; i < N; i++) {
    long long a = lower_bound(A.begin(), A.end(), B.at(i)) - A.begin();
    long long b = C.end() - upper_bound(C.begin(), C.end(), B.at(i));
    ans += a * b;
  }

  cout << ans << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

