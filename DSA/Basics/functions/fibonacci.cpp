#include <bits/stdc++.h>

/*
  Write a function to proram fibo. series.
*/

using namespace std;

int fib(int n) {
  int result;
  int prev = 0, next = 1;

  cout<<prev<<endl;

  int i = 1;
  while (i < n) {
    next = prev + next;
    prev = next - prev;
    cout<<next<<endl;;
    i++;
  }

  result = next;
  return result;
}
int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  fib(n);
  return 0;
}
