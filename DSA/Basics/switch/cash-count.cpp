#include <bits/stdc++.h>

/*
  Program to count the cash type for a particular amount.
*/

using namespace std;

int main(int argc, char *argv[]) {
  int amount, cash_type;
  cin >> amount;

  cash_type = 2000;

  switch (cash_type) {
  case 2000:
    cout << "The number of 2000 notes require for this amount are: "
         << amount / 2000 << endl;
    amount = amount % 2000;
  case 500:
    cout << "The number of 500 notes require for this amount are: "
         << amount / 500 << endl;
    amount = amount % 500;
  case 100:
    cout << "The number of 100 notes require for this amount are: "
         << amount / 100 << endl;
    amount = amount % 100;
  case 50:
    cout << "The number of 50 notes require for this amount are: "
         << amount / 50 << endl;
    amount = amount % 50;
  case 20:
    cout << "The number of 20 notes require for this amount are: "
         << amount / 20 << endl;
    amount = amount % 20;
  case 10:
    cout << "The number of 10 notes require for this amount are: "
         << amount / 10 << endl;
    amount = amount % 10;
  case 5:
    cout << "The number of 5 coins require for this amount are: " << amount / 5 << endl;
    amount = amount % 5;
  case 2:
    cout << "The number of 2 coins require for this amount are: " << amount / 2 << endl;
    amount = amount % 2;
  default:
    cout << "The number of 1 coins reqire for this amount are: " << amount << endl;
    break;
  }
  return 0;
}
