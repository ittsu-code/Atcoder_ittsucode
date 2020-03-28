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


# :warning: other/APB4b_V.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#795f3202b17cb6bc3d4b771d8c6c9eaf">other</a>
* <a href="{{ site.github.repository_url }}/blob/master/other/APB4b_V.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-28 16:36:07+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int complete_time(vector<vector<int>> &children, int x) {
  if (children.at(x).size() == 0) {
    return 0;
  }

  int max_ receive_time = 0;
  for (int c : children.at(x)) {
    int receive_time = complete_time(children, c) + 1;
    max_receive_time = max(max_receive_time, receive_time);
  }
  return max_receive_time;
}

int main() {
  int N;
  cin >> N;

  vector<int> p(N);
  p.at(0) = -1;
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }

  vector<vector<int>> children(N);
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);
    children.at(parent).push_back(i);
  }

  cout << complete_time(children, 0) << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "other/APB4b_V.cpp"
#include <bits/stdc++.h>
using namespace std;

int complete_time(vector<vector<int>> &children, int x) {
  if (children.at(x).size() == 0) {
    return 0;
  }

  int max_ receive_time = 0;
  for (int c : children.at(x)) {
    int receive_time = complete_time(children, c) + 1;
    max_receive_time = max(max_receive_time, receive_time);
  }
  return max_receive_time;
}

int main() {
  int N;
  cin >> N;

  vector<int> p(N);
  p.at(0) = -1;
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }

  vector<vector<int>> children(N);
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);
    children.at(parent).push_back(i);
  }

  cout << complete_time(children, 0) << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

