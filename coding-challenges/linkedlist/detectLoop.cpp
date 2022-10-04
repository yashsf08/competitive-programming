#include <bits/stdc++.h>

/*
  Program to detect a Loop in the linkedin list.

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
    cout << "Memory Freed for the element: " << this->data << endl;
  }
};

void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
  return;
}

void push_front(Node *&head, int d) {
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;

  return;
}

void push_back(Node *&head, int d) {
  Node *temp = new Node(d);
  if (head == NULL) {
    head = temp;
    return;
  }

  Node *prev = NULL;
  Node *curr = head;
  while (curr != NULL) {
    prev = curr;
    curr = curr->next;
  }

  temp->next = prev->next;
  prev->next = temp;
  return;
}

bool detect_loop(Node *&head) {

  Node *temp = head;
  unordered_map<Node *, bool> visited;
  while (temp != NULL) {
    if (visited[temp] == true) {
      return true;
    }
    visited[temp] = true;
    temp = temp->next;
  }

  return false;
}

bool floyd_detection_loop(Node *&head) {

  Node *slow = head;
  Node *fast = head;

  while (slow != NULL && fast != NULL) {

    fast = fast->next;
    if (fast->next != NULL) {
      fast = fast->next;
    }

    slow = slow->next;

    if (slow == fast) {
      return true;
    }
  }

  return false;
}

Node *floyd_detection_loop_element(Node *&head) {

  Node *slow = head;
  Node *fast = head;

  while (slow != NULL && fast != NULL) {

    fast = fast->next;
    if (fast->next != NULL) {
      fast = fast->next;
    }

    slow = slow->next;

    if (slow == fast) {
      return slow;
    }
  }

  return NULL;
}

Node *get_first_element_loop(Node *head) {
  Node *intersectionElement = floyd_detection_loop_element(head);

  if (intersectionElement == NULL) {
    return NULL;
  }

  Node *slow = head;

  while (slow != intersectionElement) {
    slow = slow->next;
    intersectionElement = intersectionElement->next;
  }

  return slow;
}

void remove_loop(Node *head) {
  if (head == NULL) {
    return;
  }
  Node *intersectionElement = get_first_element_loop(head);
  Node *temp = intersectionElement;

  if (intersectionElement == NULL) {
    return;
  }

  while (temp->next != intersectionElement) {
    temp = temp->next;
  }

  temp->next = NULL;

  return;
}

int main(int argc, char *argv[]) {
  Node *head = new Node(10);
  push_back(head, 12);
  push_back(head, 13);
  push_back(head, 14);
  push_back(head, 15);

  Node *temp1 = head->next->next->next;
  Node *temp2 = head->next->next->next->next;
  cout << temp1->data << endl;
  cout << temp2->data << endl;

  temp2->next = temp1;
  cout << temp1->data << endl;
  cout << temp2->data << endl;
  cout << temp2->next->data << endl;
  cout << "--------------------------" << endl;
  cout << floyd_detection_loop(head) << endl;

  Node *loop = floyd_detection_loop_element(head);
  cout << loop->data << endl;
  Node *loop2 = get_first_element_loop(head);
  cout << loop2->data << endl;
  remove_loop(head);
  print(head);
  return 0;
}
