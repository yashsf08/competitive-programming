#include <bits/stdc++.h>

/*
  Remove duplicates from a Sorted Linked List.
  Complexity:
  time - O(n)
  space - O(n)
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

void sort012(Node *&head) {
  if (head == NULL || head->next == NULL) {
    return;
  }

  Node *temp = head;
  vector<int> count = {0, 0, 0};

  // unordered_map<int, int> count;
  while (temp != NULL) {
    count[temp->data]++;
    temp = temp->next;
  }

  temp = head;

  for (int i = 0; i < count.size(); i++) {
    for (int j = 0; j < count[i]; j++) {
      temp->data = i;
      temp = temp->next;
    }
  }

  return;
}

int main(int argc, char *argv[]) {
  Node *head = new Node(0);
  push_back(head, 1);
  push_back(head, 2);
  push_back(head, 0);
  push_back(head, 2);
  push_back(head, 0);
  push_back(head, 0);
  push_back(head, 2);
  push_back(head, 1);
  push_back(head, 2);
  push_back(head, 0);
  push_back(head, 1);
  push_back(head, 0);
  push_back(head, 1);
  push_back(head, 2);
  push_back(head, 1);

  print(head);
  cout << " ----------------------------------------- " << endl;
  sort012(head);
  print(head);

  return 0;
}
