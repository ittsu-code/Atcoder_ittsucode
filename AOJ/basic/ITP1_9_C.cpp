#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  int taro = 0;
  int hanako = 0;

  string str1, str2;
  for (int i = 0; i < N; i++) {
    cin >> str1 >> str2;

    if (str1 > str2)
      taro += 3;
    else if (str1 < str2)
      hanako += 3;
    else if (str1 == str2) {
      taro++;
      hanako++;
    }
  }

  cout << taro << ' ' << hanako << endl;
}