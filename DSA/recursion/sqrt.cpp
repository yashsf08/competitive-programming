#include <bits/stdc++.h>

using namespace std;

/*
  Program to calculate sqrt using binarySearh implementd in recurison.
*/

int sqrt(int n, int start, int end) {

  int mid = start + (end - start) / 2;

  if (start > end)
    return -1;

  if (mid * mid <= n) {

    int result = sqrt(n, mid + 1, end);
    return (mid > result) ? mid : result;

  } else {

    return sqrt(n, start, mid - 1);
  }
}

int main(int argc, char *argv[]) {
  int a = 49;
  int result = sqrt(a, 0, 10);
  cout << result << endl;
  return 0;
}
