#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int fib(int n) {

  if (n == 0)
    return 0;

  if (n == 1)
    return 1;

  return fib(n - 1) + fib(n - 2);
}

int fibonacci_series(int n) {
  if (n < 0)
    return -1;

  return fib(n);
}

int main(int argc, char *argv[]) {

  // Taking input from the user

  int n;

  cin >> n;

  fibonacci_series(n);

  return 0;
}
