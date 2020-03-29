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
<script type="text/javascript" src="../../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../../assets/css/copy-button.css" />


# :warning: abc160/c/main.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#42431336c1cb662c4014fe3eeb1b56f3">abc160/c</a>
* <a href="{{ site.github.repository_url }}/blob/master/abc160/c/main.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-29 10:30:52+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, N;
  cin >> K >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  vector<int> B(N);
  for (int i = 0; i < N - 1; i++) {
    B.at(i) = A.at(i + 1) - A.at(i);
  }
  B.at(N - 1) = ((K - A.at(N - 1)) + A.at(0));

  int ans = 100100100;
  for (int i = 0; i < N; i++) {
    ans = min(ans, K - B.at(i));
  }

  cout << ans << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "abc160/c/main.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, N;
  cin >> K >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  vector<int> B(N);
  for (int i = 0; i < N - 1; i++) {
    B.at(i) = A.at(i + 1) - A.at(i);
  }
  B.at(N - 1) = ((K - A.at(N - 1)) + A.at(0));

  int ans = 100100100;
  for (int i = 0; i < N; i++) {
    ans = min(ans, K - B.at(i));
  }

  cout << ans << endl;
}

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>

