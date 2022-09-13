#include <bits/stdc++.h>

// Program to calculate factorial using recursion.

using namespace std;

int factorial(int n) {

  if (n == 1 or n == 0) {
    return 1;
  }

  return (n % 100) * (factorial(n - 1) % 100);
}

int main(int argc, char *argv[]) {
  cout << factorial(6) << endl;
  return 0;
}
