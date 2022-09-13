#include <bits/stdc++.h>

/*
  Program to calculate fibonacci series from a given number using recursion.
*/

using namespace std;

int fibonacci(int n) {

  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char *argv[]) {
  int n = 6;
  int result = fibonacci(n);
  cout << result << endl;
  return 0;
}
