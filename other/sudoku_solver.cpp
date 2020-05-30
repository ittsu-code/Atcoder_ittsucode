#include <bits/stdc++.h>
using namespace std;
using Field = vector<vector<int>>;

void rec(Field &field, vector<Field> &res) {
  int emptyi = -1, emptyj = -1;
  for (int i = 0; i < 9 && emptyi == -1; i++) {
    for (int j = 0; j < 9 && emptyj == -1; j++) {
      if (field[i][j] == -1) {
        emptyi = i;
        emptyj = j;
        break;
      }
    }
  }

  if (emptyi == -1 || emptyj == -1) {
    res.push_back(field);
    return;
  }

  vector<bool> canuse(10, 1);
  for (int i = 0; i < 9; i++) {
    if (field[emptyi][i] != -1) canuse[field[emptyi][i]] = false;
    if (field[i][emptyj] != -1) canuse[field[i][emptyj]] = false;

    int bi = emptyi / 3 * 3 + 1, bj = emptyj / 3 * 3 + 1;
    for (int di = bi - 1; di <= bi + 1; di++)
      for (int dj = bj - 1; dj <= bj + 1; dj++)
        if (field[di][dj] != -1) canuse[field[di][dj]] = false;
  }

  for (int v = 0; v < 9; v++) {
    if (!canuse[v]) continue;
    field[emptyi][emptyj] = v;
    rec(field, res);
  }
}

int main() {
  Field field(9, vector<int>(9, -1));
  for (int i = 0; i < 9; i++) {
    string line;
    cin >> line;
    for (int j = 0; j < 9; j++) {
      if (line[j] == '*') continue;
      int num = line[j] - '0';
      field[i][j] = num;
    }
  }
}