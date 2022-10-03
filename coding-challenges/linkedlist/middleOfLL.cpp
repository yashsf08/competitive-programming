#include <bits/stdc++.h>

using namespace std;

class Node {

public:
  int data;
  Node *next;
  Node(int d) {
    this->data = d;
    this->next = NULL;
  }
  ~Node() {
    this->next = NULL;
    cout << "Memory Freed for the element: " << this->data;
  }
  void getHead() {
    cout << "Element for the given head is: " << this->data << endl;
  }
};

void push_front(Node *&head, int d) {
  if (head == NULL) {
    return;
  }

  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
  return;
}

void print(Node *&head) {
  Node *temp = head;
  if (temp == NULL) {
    return;
  }

  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;

  return;
}

int middle_element(Node *&head) {

  if (head == NULL) {
    return 0;
  }

  if (head->next == NULL) {
    return head->data;
  }

  Node *fast = head->next;
  Node *slow = head;

  while (fast != NULL) {
    fast = fast->next;
    if (fast != NULL) {
      fast = fast->next;
    }
    slow = slow->next;
  }

  return slow->data;
}

int main() {

  Node *node1 = new Node(10);
  push_front(node1, 9);
  push_front(node1, 8);
  push_front(node1, 7);
  push_front(node1, 6);
  push_front(node1, 5);
  push_front(node1, 4);
  push_front(node1, 3);
  push_front(node1, 100);
  print(node1);
  // node1->getHead();

  int result = middle_element(node1);
  cout << "Middle element for the given list is: " << result << endl;

  return 0;
}
