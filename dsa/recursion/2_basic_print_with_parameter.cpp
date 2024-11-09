#include <bits/stdc++.h>

using namespace std;

void print_ff(int n) {
  if (n < 1) {
    return;
  }
  cout << "Hello world" << endl;
  print_ff(n - 1);
}

int main(int argc, char *argv[]) {
  print_ff(5);
  return 0;
}
