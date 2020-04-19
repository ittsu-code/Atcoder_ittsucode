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


# :warning: ABC/PAST/PAST_F.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#0b05f116f77b6cceb12d0d210b54a202">ABC/PAST</a>
* <a href="{{ site.github.repository_url }}/blob/master/ABC/PAST/PAST_F.cpp">View this file on GitHub</a>
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

  vector<pair<int, int>> p(N);

  for (int i = 0; i < N; i++) {
    int a;
    int b;
    cin >> a >> b;
    p.at(i) = make_pair(b, -a);
  }

  sort(p.begin(), p.end());
  reverse(p.begin(), p.end());

  int tot = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      int a;
      int b;
      tie(b, a) = p.at(j);
      if (a * (-1) - 1 <= i) {
        tot += b;
        p.erase(p.begin + j);
        break;
      }
    }
    cout << tot << endl;
  }
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "ABC/PAST/PAST_F.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> p(N);

  for (int i = 0; i < N; i++) {
    int a;
    int b;
    cin >> a >> b;
    p.at(i) = make_pair(b, -a);
  }

  sort(p.begin(), p.end());
  reverse(p.begin(), p.end());

  int tot = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      int a;
      int b;
      tie(b, a) = p.at(j);
      if (a * (-1) - 1 <= i) {
        tot += b;
        p.erase(p.begin + j);
        break;
      }
    }
    cout << tot << endl;
  }
}

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>

