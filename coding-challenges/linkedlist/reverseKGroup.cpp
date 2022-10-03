#include <bits/stdc++.h>

/*
  Program to reverse Linked List in a given group.
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

Node *reverseKGroup(Node *head, int k) {
  // Null Case
  if (head == NULL) {
    return NULL;
  }

  // k group sorting
  Node *temp = NULL;
  Node *prev = NULL;
  Node *curr = head;
  int count = 0;

  while (curr != NULL && count < k) {
    temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
    count++;
  }

  // recursion concept
  if (temp != NULL) {
    head->next = reverseKGroup(temp, k);
  }

  // return the head of the reversed list
  return prev;
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

  Node *updateNode = reverseKGroup(node1, 2);
  print(updateNode);


  return 0;
}
