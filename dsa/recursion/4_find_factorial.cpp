#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {

  // writing edge case
  if (n <= 1)
    return 1;

  return n * factorial(n - 1);
}

int main(int argc, char *argv[]) {

  // input value

  int n;
  cin >> n;
  n = factorial(n);

  cout << "Factorial of the number is: " << n << endl;

  return 0;
}
