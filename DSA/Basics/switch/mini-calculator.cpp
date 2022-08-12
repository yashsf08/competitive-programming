#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int a, b;
  char c;
  cin >> a >> b;
  cin >> c;

  switch (c) {
  case '+':
    cout << a + b;
    break;
  case '*':
    cout << a * b;
    break;
  case '-':
    cout << a - b;
    break;
  case '%':
    cout << a % b;
    break;
  case '/':
    cout << a / b;
    break;
  default:
    cout << "Invalid Operator Provided!";
    break;
  }
  return 0;
}
