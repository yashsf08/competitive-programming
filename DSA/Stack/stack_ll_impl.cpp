#include <bits/stdc++.h>

using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
  ~Node() {
    this->next = NULL;
    delete this;
  }
};

void push_front(Node *&head, int d) {
  Node *temp = new Node(d);
  if (head == NULL) {
    head = temp;
    return;
  }

  temp->next = head;
  head = temp;

  return;
}

void print_list(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

class Stack {
public:
  int top;
  int size;
  Node *head;
  Stack(int size) {
    this->top = -1;
    this->size = size;
    this->head = NULL;
  }
  ~Stack() {
    this->top = -1;
    this->size = 0;
    this->erase();
    this->head = NULL;
  }

  void erase() {
    while (head != NULL) {
      Node *temp = head->next;
      delete head;
      head = temp;
    }
    top = -1;
  }

  void push(int data) {

    if (size - top <= 1) {
      cout << "Stack Overflow!" << endl;
      return;
    }

    push_front(head, data);
    top++;
    return;
  }

  void pop() {
    if (top == -1) {
      cout << "Stack Underflow!" << endl;
      return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
    top--;
    return;
  }

  int peek() {
    if (top == -1) {
      cout << "Stack is empty!" << endl;
      return 0;
    }
    return head->data;
  }

  bool isempty() {
    if (top == -1) {
      return true;
    } else {
      return false;
    }
  }

  void print() {
    Node *temp = head;
    while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main(int argc, char *argv[]) {

  // Linked List initialization
  // Node *head = new Node(10);
  // push_front(head, 9);
  // push_front(head, 7);
  // push_front(head, 6);
  // push_front(head, 5);
  // print_list(head);

  // Stack initialization
  Stack *nums = new Stack(5);
  nums->push(1);
  nums->push(2);
  nums->push(3);
  nums->push(4);
  nums->print();
  cout << nums->peek() << endl;
  cout << nums->size << endl;
  cout << nums->top << endl;

  return 0;
}
