#include <bits/stdc++.h>

/*
  Program to find the palindrome in a given integer.
*/

using namespace std;

bool isPalindrome(int n) {
  int sum = 0;

  if (n <= 0 || n % 10 == 0)
    return false;

  while (n > sum) {
    sum = sum * 10 + n % 10;
    n = n / 10;
  }

  return (sum == n) || (sum / 10 == n);
}

int main(int argc, char *argv[]) {

  int test = 12321;
  if (isPalindrome(test))
    cout << "Give Integer is Palindrome.";
  else
    cout << "Given Integer is not a Palindrome.";

  return 0;
}
