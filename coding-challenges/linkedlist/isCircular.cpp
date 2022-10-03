#include <bits/stdc++.h>

/*
  Program to implement ciruclar linkedin list.
*/

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
    if (this->next != NULL) {
      this->next = NULL;
    }
    cout << "memory freed for element: " << this->data << endl;
  }
};

// Travelsal
void print(Node *&tail) {
  if (tail == NULL) {
    cout << "List is empty" << endl;
  }

  Node *temp = tail;
  do {
    cout << temp->data << " ";
    temp = temp->next;
  } while (temp != tail);
  cout << endl;
}

// Insertion
void insertNode(Node *&tail, int d) {
  Node *temp = new Node(d);
  if (tail == NULL) {
    tail = temp;
    tail->next = temp;
    return;
  }

  temp->next = tail->next;
  tail->next = temp;
  return;
}

void insertNode(Node *&tail, int element, int d) {

  if (tail == NULL) {
    cout << "Empty List." << endl;
    return;
  }

  Node *temp = new Node(d);
  Node *curr = tail->next;
  while (element != curr->data && curr != tail) {
    curr = curr->next;
  }
  if (curr->data != element) {
    cout << "Given element is not present, Aborting Operation." << endl;
    return;
  }

  temp->next = curr->next;
  curr->next = temp;
  return;
}

void deleteNode(Node *&tail, int element) {
  if (tail == NULL) {
    cout << "List is empty." << endl;
  }

  Node *curr = tail->next;
  Node *prev = tail;
  if (curr == prev) {
    tail = NULL;
    delete prev;
    return;
  }

  while (element != curr->data && curr != tail) {
    prev = curr;
    curr = curr->next;
  }

  if (curr->data != element) {
    cout << "Given element is not present, Aborting Operation." << endl;
    return;
  }

  prev->next = curr->next;

  if (curr == tail) {
    tail = prev;
  }

  curr->next = NULL;
  delete curr;
  return;
}

bool isCircular(Node *tail) {
  if (tail == NULL) {
    return true;
  }

  if (tail == tail->next) {
    return true;
  }

  Node *temp = tail->next;

  while (temp != tail && temp != NULL) {
    temp = temp->next;
  }

  if (temp == NULL) {
    return false;

  } else {
    return true;
  }
}

int main(int argc, char *argv[]) {
  Node *node1 = NULL;

  insertNode(node1, 10);
  print(node1);
  insertNode(node1, 11);
  print(node1);
  insertNode(node1, 12);
  print(node1);
  insertNode(node1, 12, 33);
  print(node1);
  insertNode(node1, 10, 40);
  print(node1);
  insertNode(node1, 11, 50);
  print(node1);
  deleteNode(node1, 40);
  print(node1);
  deleteNode(node1, 50);
  print(node1);
  deleteNode(node1, 10);
  print(node1);
  cout << node1->data << endl;

  if (isCircular(node1)) {
    cout << "List is Circular." << endl;
  } else {
    cout << "List is not Circular." << endl;
  }

  return 0;
}
