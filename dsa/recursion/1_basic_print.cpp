#include <bits/stdc++.h>

/*
 * Time Complexity O(1): that is the number of times you want to print
 * Space Complexity O(n) { Stack is keeping track of the task }
 */

using namespace std;

int cnt = 0;

void print_ff() {

  if (cnt == 5)
    return;
  cnt++;
  cout << "hello world" << endl;
  print_ff();
}

int main(int argc, char *argv[]) {
  // recursive function to print 5 times
  print_ff();
  return 0;
}
