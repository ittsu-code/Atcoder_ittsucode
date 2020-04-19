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


# :warning: AOJ/BinarySearch.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#58a9d597b8071bcb332aab0f39b15887">AOJ</a>
* <a href="{{ site.github.repository_url }}/blob/master/AOJ/BinarySearch.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-19 18:37:09+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

bool isOK(vector<int> A, int index, int key) {
  if (A.at(index) >= key)
    return true;
  else
    return false;
}

int binary_search(vector<int> A, int key) {
  int ng = -1;
  int ok = (int)A.size();

  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;

    if (isOK(A, mid, key))
      ok = mid;
    else
      ng = mid;
  }
  return ok;
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int M;
  cin >> M;
  vector<int> B(M);
  int sum = 0;
  for (int i = 0; i < M; i++) {
    cin >> B.at(i);
    if (binary_search(A, B.at(i))) sum++;
  }

  cout << sum << endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "AOJ/BinarySearch.cpp"
#include <bits/stdc++.h>
using namespace std;

bool isOK(vector<int> A, int index, int key) {
  if (A.at(index) >= key)
    return true;
  else
    return false;
}

int binary_search(vector<int> A, int key) {
  int ng = -1;
  int ok = (int)A.size();

  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;

    if (isOK(A, mid, key))
      ok = mid;
    else
      ng = mid;
  }
  return ok;
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  int M;
  cin >> M;
  vector<int> B(M);
  int sum = 0;
  for (int i = 0; i < M; i++) {
    cin >> B.at(i);
    if (binary_search(A, B.at(i))) sum++;
  }

  cout << sum << endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

