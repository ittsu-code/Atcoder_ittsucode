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


# :warning: other/ALDS1_5_A.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#795f3202b17cb6bc3d4b771d8c6c9eaf">other</a>
* <a href="{{ site.github.repository_url }}/blob/master/other/ALDS1_5_A.cpp">View this file on GitHub</a>
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
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int M;
  cin >> M;
  vector<int> B(M);
  for (int i = 0; i < M; i++) cin >> B.at(i);

  for (int tmp = 0; tmp < (1 << 20); tmp++) {
    bitset<20> s(tmp);

    int sum = 0;
    for (int i = 0; i < M; i++) {
      bool ans = false;
      for (int j = 0; j < N; j++) {
        if (s.test(j)) {
          sum += A.at(j);
        }
        if (sum == B.at(i)) {
          ans = true;
        }
      }
      if (ans)
        cout << "yes" << endl;
      else
        cout << "no" << endl;
    }
  }
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "other/ALDS1_5_A.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int M;
  cin >> M;
  vector<int> B(M);
  for (int i = 0; i < M; i++) cin >> B.at(i);

  for (int tmp = 0; tmp < (1 << 20); tmp++) {
    bitset<20> s(tmp);

    int sum = 0;
    for (int i = 0; i < M; i++) {
      bool ans = false;
      for (int j = 0; j < N; j++) {
        if (s.test(j)) {
          sum += A.at(j);
        }
        if (sum == B.at(i)) {
          ans = true;
        }
      }
      if (ans)
        cout << "yes" << endl;
      else
        cout << "no" << endl;
    }
  }
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

