#include <bits/stdc++.h>

// Implementation of stack using arrays.

using namespace std;

class Stack {

public:
  int top;
  int size;
  int *arr;

  Stack() {
    this->top = -1;
    this->size = 5;
    this->arr = new int[this->size]();
  }

  Stack(int size) {
    this->top = -1;
    this->size = size;
    this->arr = new int[size];
  }

  ~Stack() {
    delete arr;
    this->arr = NULL;
  }

  void push(int n) {
    if (this->size - this->top <= 1) {
      cout << "Stack Overflow!, Aborting Operation" << endl;
      return;
    }
    this->top++;
    this->arr[this->top] = n;
  }

  void pop() {
    if (this->top == -1) {
      cout << "Stack is empty." << endl;
    }
    this->arr[this->top] = 0;
    this->top--;
  }

  int peek() {
    if (top == -1) {
      cout << "list is empty!!" << endl;
      return 0;
    }

    return this->arr[top];
  }

  bool isempty() {
    if (this->top == -1) {
      return true;
    } else {
      return false;
    }
  }

  void print() {
    for (int i = 0; i < this->top + 1; i++) {
      cout << this->arr[i] << " ";
    }
    cout << endl;
  }
};

int main(int argc, char *argv[]) {

  Stack *temp = new Stack(10);
  temp->push(5);
  temp->push(6);
  temp->push(7);
  temp->push(8);
  temp->push(9);
  temp->push(10);
  temp->print();
  cout << "----------------------------" << endl;
  cout << temp->size << endl;
  cout << temp->peek() << endl;
  cout << temp->top << endl;
  return 0;
}
