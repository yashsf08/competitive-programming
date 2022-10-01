#include <bits/stdc++.h>

/*
  Basic program for LinkedList, and its operations
  - traversal
  - Insertion
  - Deletion


  Complexity;

*/

using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int d) {
    this->data = d;
    this->next = NULL;
    cout << "Creating New Node: " << data << endl;
  }

  ~Node() {
    int value = this->data;
    if (this->next != NULL) {
      this->next = NULL;
    }
    cout << "Memory is freed, removed the value: " << value << endl;
  }
};

// Insert Operations

void insertBegin(Node *&head, int d) {

  Node *temp = new Node(d);
  if (head == NULL) {
    head = temp;
    return;
  }

  temp->next = head;
  head = temp;

  return;
}

/* void insertEnd(Node *&head, int d) {
  Node *element = new Node(d);

  if (head == NULL) {
    head = element;
    return;
  }

  Node *temp = head;

  while (temp->next != NULL) {
    temp = temp->next;
  }

  temp->next = element;
  return;
} */

void insertEnd(Node *&tail, int d) {
  Node *element = new Node(d);
  if (tail == NULL) {
    tail = element;
    return;
  }

  tail->next = element;
  tail = element;

  return;
}

void insertAt(Node *&head, Node *&tail, int position, int d) {
  int cnt = 1;
  Node *temp = head;

  if (position == 1) {
    insertBegin(head, d);
    return;
  }

  while (cnt < position - 1) {
    temp = temp->next;
    if (temp == NULL) {
      cout << "Exceeded the list!!!" << endl;
      return;
    }

    cnt++;
  }

  if (temp->next == NULL) {
    insertEnd(tail, d);
    return;
  }

  Node *insertNode = new Node(d);
  insertNode->next = temp->next;
  temp->next = insertNode;
}

// Deletion Operations

void popFront(Node *&head, Node *&tail) {

  if (head == NULL) {
    cout << "List is empty." << endl;
    return;
  }


  Node *temp = head;
  if (head->next == NULL) {
    head = tail = NULL;
    delete temp;
    return;
  }

  head = head->next;
  delete temp;

  return;
}

void deleteAt(Node *&head, Node *&tail, int position) {

  if (head == NULL) {
    cout << "List is empty." << endl;
  }

  if (position == 1) {
    popFront(head, tail);
    return;
  }

  Node *curr = head;
  Node *prev;
  int cnt = 1;
  while (cnt < position) {
    prev = curr;
    curr = curr->next;

    if (curr == NULL) {
      cout << "Invalid index position." << endl;
      return;
    }
    cnt++;
  }

  if (curr == tail) {
    cout << "inside!!!!" << endl;
    tail = prev;
  }

  prev->next = curr->next;

  delete curr;

  return;
}

void print(Node *temp) {
  if (temp == NULL) {
    cout << "The list is empty" << endl;
    return;
  }

  while (temp != NULL) {
    std::cout << temp->data << "  ";
    temp = temp->next;
  }
  cout << endl;
  return;
}

void get_length(Node *&head) {
  if (head == NULL) {
    cout << "List is Empty" << endl;
  }

  Node *temp = head;
  int cnt = 0;
  while (temp != NULL) {
    temp = temp->next;
    cnt++;
  }
  cout << "Length: " << cnt << endl;
  return;
}

int main(int argc, char *argv[]) {

  int d = 10;
  Node *temp = new Node(d);
  Node *head = temp;
  Node *tail = temp;

  insertBegin(head, 11);
  print(head);
  insertBegin(head, 12);
  print(head);
  insertEnd(tail, 7);
  print(head);
  insertEnd(tail, 6);
  print(head);
  insertAt(head, tail, 3, 99);
  print(head);
  insertAt(head, tail, 7, 96);
  print(head);

  cout << head->data << endl;
  cout << tail->data << endl;
  print(head);
  popFront(head, tail);
  print(head);
  print(head);
  popFront(head, tail);
  print(head);
  popFront(head, tail);
  print(head);
  print(head);
  print(head);
  print(head);
  deleteAt(head, tail, 1);
  print(head);
  deleteAt(head, tail, 2);
  print(head);

  cout << head->data << endl;
  cout << tail->data << endl;

  deleteAt(head, tail, 2);
  cout << head->data << endl;
  cout << tail->data << endl;
  popFront(head, tail);
  print(head);
  print(tail);

  return 0;
}
