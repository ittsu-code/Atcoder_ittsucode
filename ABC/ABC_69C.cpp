#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

const unsigned int BIT_FLAG_0 = (1 << 0);
const unsigned int BIT_FLAG_1 = (1 << 1);
const unsigned int BIT_FLAG_2 = (1 << 2);
const unsigned int BIT_FLAG_3 = (1 << 3);
const unsigned int BIT_FLAG_4 = (1 << 4);
const unsigned int BIT_FLAG_5 = (1 << 5);
const unsigned int BIT_FLAG_6 = (1 << 6);
const unsigned int BIT_FLAG_7 = (1 << 7);

const unsigned int BIT_FLAG_DAMEGE = (1 << 0);
const unsigned int BIT_FLAG_DOKU = (1 << 1);
const unsigned int BIT_FLAG_MAHI = (1 << 2);
const unsigned int BIT_FLAG_SENTOFUNO = (1 << 3);

const unsigned int MASK_ATTACK = BIT_FLAG_DAMEGE;
const unsigned int MASK_PUNCH = BIT_FLAG_DAMEGE | BIT_FLAG_MAHI;
const unsigned int MASK_DEFEAT = BIT_FLAG_DAMEGE | BIT_FLAG_SENTOFUNO;
const unsigned int MASK_DOKU_MAHI = BIT_FLAG_DOKU | BIT_FLAG_MAHI;

int main() {
  unsigned int bit = BIT_FLAG_1 | BIT_FLAG_3 | BIT_FLAG_5;
  cout << "{1, 3, 5} == " << bitset<8>(bit) << endl;

  if (bit & BIT_FLAG_3) {
    cout << "3 is in" << bitset<8>(bit) << endl;
  }

  if (!(bit & BIT_FLAG_0)) {
    cout << "0 is not in " << bitset<8>(bit) << endl;
  }

  unsigned int bit2 = BIT_FLAG_0 | BIT_FLAG_3 | BIT_FLAG_4;
  cout << bitset<8>(bit) << " AND " << bitset<8>(bit2) << " = "
       << bitset<8>(bit & bit2) << endl;
  cout << bitset<8>(bit) << " OR " << bitset<8>(bit2) << " = "
       << bitset<8>(bit | bit2) << endl;

  cout << "before: " << bitset<8>(bit) << endl;
  bit |= BIT_FLAG_6;
  cout << "after: " << bitset<8>(bit) << "(6 include)" << endl;

  cout << "before: " << bitset<8>(bit2) << endl;
  bit2 &= ~BIT_FLAG_3;
  cout << "after: " << bitset<8>(bit2) << "(3 excluded)" << endl;

  unsigned int status = 0;
  cout << "start: " << bitset<4>(status) << endl;

  status |= MASK_ATTACK;
  cout << "attacked: " << bitset<4>(status) << endl;

  status |= MASK_PUNCH;
  cout << "punched: " << bitset<4>(status) << endl;
}