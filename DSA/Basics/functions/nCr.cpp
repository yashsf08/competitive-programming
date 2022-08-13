#include <bits/stdc++.h>

/*
  Calculate nCr using funcitons.
*/

using namespace std;

int factorial(int n) {
  /* complexity  O(n) */
  int fact = 1;

  for (int i = 2; i <= n; i++) {
    fact = fact * i;
  }

  return fact;
}

int nCr(int n, int r) {
  /* complexity  O(n) */
  int result;

  int nfact = factorial(n);
  int rfact = factorial(r);

  result = nfact/(rfact * factorial(n-r));

  return result;
}

int main(int argc, char *argv[]) {
  int i = 0;

  cout<<factorial(5)<<endl;
  cout<<factorial(4)<<endl;
  cout<<factorial(3)<<endl;
  cout<<factorial(2)<<endl;
  cout<<factorial(1)<<endl;
  cout<<factorial(1)<<endl;


  cout<<nCr(4, 2)<<endl;
  cout<<nCr(3, 2)<<endl;
  cout<<nCr(5, 2)<<endl;


  return 0;
}
