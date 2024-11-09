#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int f(int n) {
  if (n <= 0) {
    return 0;
  }
  return n + f(n - 1);
}

int main(int argc, char *argv[]) {

  // Getting the number of elements
  int n;
  cin >> n;

  int result;
  result = f(n);

  cout << "Sum of the number is: " << result << endl;

  return 0;
}
