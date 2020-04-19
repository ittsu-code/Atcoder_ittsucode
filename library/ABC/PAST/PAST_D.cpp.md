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


# :warning: ABC/PAST/PAST_D.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#0b05f116f77b6cceb12d0d210b54a202">ABC/PAST</a>
* <a href="{{ site.github.repository_url }}/blob/master/ABC/PAST/PAST_D.cpp">View this file on GitHub</a>
    - Last commit date: 2020-04-19 18:37:09+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int len = S.size();

  int tot = 0;
  set<char> StOne;
  for (int i = 0; i < len; i++) {
    StOne.insert(S.at(i));
    StOne.insert('.');
  }
  tot += StOne.size();

  set<string> StTwo;
  for (int i = 0; i < len - 1; i++) {
    string A = S.substr(i, 2);
    string B = S.substr(i, 1);
    string C = S.substr(i + 1, 1);
    StTwo.insert(A);
    StTwo.insert(B + '.');
    StTwo.insert('.' + C);
  }
  if (len >= 2) tot += StTwo.size() + 1;

  set<string> StThree;
  for (int i = 0; i < len - 2; i++) {
    string A = S.substr(i, 3);
    string B = S.substr(i, 1);
    string C = S.substr(i + 1, 1);
    string D = S.substr(i + 2, 1);
    StThree.insert(A);
    StThree.insert(B + '.' + '.');
    StThree.insert('.' + C + '.');
    StThree.insert('.' + "." + D);
    StThree.insert(B + C + '.');
    StThree.insert(B + '.' + D);
    StThree.insert('.' + C + D);
  }
  if (len >= 3) tot += StThree.size() + 1;

  cout << tot << endl;
}
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "ABC/PAST/PAST_D.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int len = S.size();

  int tot = 0;
  set<char> StOne;
  for (int i = 0; i < len; i++) {
    StOne.insert(S.at(i));
    StOne.insert('.');
  }
  tot += StOne.size();

  set<string> StTwo;
  for (int i = 0; i < len - 1; i++) {
    string A = S.substr(i, 2);
    string B = S.substr(i, 1);
    string C = S.substr(i + 1, 1);
    StTwo.insert(A);
    StTwo.insert(B + '.');
    StTwo.insert('.' + C);
  }
  if (len >= 2) tot += StTwo.size() + 1;

  set<string> StThree;
  for (int i = 0; i < len - 2; i++) {
    string A = S.substr(i, 3);
    string B = S.substr(i, 1);
    string C = S.substr(i + 1, 1);
    string D = S.substr(i + 2, 1);
    StThree.insert(A);
    StThree.insert(B + '.' + '.');
    StThree.insert('.' + C + '.');
    StThree.insert('.' + "." + D);
    StThree.insert(B + C + '.');
    StThree.insert(B + '.' + D);
    StThree.insert('.' + C + D);
  }
  if (len >= 3) tot += StThree.size() + 1;

  cout << tot << endl;
}

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>

