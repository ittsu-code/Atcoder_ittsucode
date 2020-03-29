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


# :warning: abc150/c/main.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#75ff784a9cfc691ca5103284523bb482">abc150/c</a>
* <a href="{{ site.github.repository_url }}/blob/master/abc150/c/main.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-29 10:30:52+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<char> P(N);
  for (int i = 0; i < N; i++) cin >> P.at(i);
  vector<char> Q(N);
  for (int i = 0; i < N; i++) cin >> Q.at(i);

  do {
    for (int i = 1; i <= N; i++) {
      cout << i;
    }
    cout << endl;
  } while (next_permutation(1, 1 + N));
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "abc150/c/main.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<char> P(N);
  for (int i = 0; i < N; i++) cin >> P.at(i);
  vector<char> Q(N);
  for (int i = 0; i < N; i++) cin >> Q.at(i);

  do {
    for (int i = 1; i <= N; i++) {
      cout << i;
    }
    cout << endl;
  } while (next_permutation(1, 1 + N));
}

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>
