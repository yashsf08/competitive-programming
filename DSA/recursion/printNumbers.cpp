#include <bits/stdc++.h>

/*
  Program to print numbers in both ascending and descending order.
*/

using namespace std;

void ascendingOrder(int n) {

  if (n == 0)
    return;

  ascendingOrder(n - 1);
  cout << n << endl;
}

void descendingOrder(int n) {
  if (n == 0)
    return;

  cout << n << endl;
  descendingOrder(n - 1);
}

int main(int argc, char *argv[]) {
  int x = 5;
  ascendingOrder(x);
  cout << "-------------------" << endl;
  descendingOrder(x);
  return 0;
}
