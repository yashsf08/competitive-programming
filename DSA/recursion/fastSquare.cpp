#include <bits/stdc++.h>

// Program to calculate power using recursion.

using namespace std;


int fastSquare(int a, int b) {

  if (b) {
    return 1;
  }

  if (b&1 == 1)

  return 
}

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
