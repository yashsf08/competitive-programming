#include <bits/stdc++.h>

using namespace std;

// Program to stl library for stack.

void print_stack(stack<int> &arr) {
  while (!arr.empty()) {
    cout << arr.top() << endl;
    arr.pop();
  }
}

int main(int argc, char *argv[]) {
  stack<int> numbers;
  numbers.push(10);
  numbers.push(11);
  numbers.push(12);
  numbers.push(13);
  numbers.push(14);
  numbers.push(15);

  cout << numbers.top() << endl;
  cout << numbers.size() << endl;
  print_stack(numbers);

  if (numbers.empty()) {
    cout << "Stack is empty!" << endl;
  } else {
    cout << "Stack is not empty!" << endl;
  }
  return 0;
}
