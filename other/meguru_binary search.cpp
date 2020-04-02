#include <bits/stdc++.h>
using namespace std;

vector<int> a = {1, 14, 32, 51, 51, 51, 243, 419, 750, 910};

bool isOK(int index, int key) {
  if (a[index] >= key)
    return true;
  else
    return false;
}

int binary_search(int key) {
  int left = -1;
  int right = (int)a.size();

  while (right - left > 1) {
    int mid = left + (right - left) / 2;

    if (isOK(mid, key))
      right = mid;
    else
      left = mid;
  }

  return right;
}

int main() {
  cout << binary_search(51)
       << endl;  // a[3] = 51 (さっきは 4 を返したが今回は「最小の index」なので
                 // 3)
  cout << binary_search(1) << endl;    // a[0] = 1
  cout << binary_search(910) << endl;  // a[9] = 910

  cout << binary_search(52) << endl;   // 6
  cout << binary_search(0) << endl;    // 0
  cout << binary_search(911) << endl;  // 10 (場外)
}