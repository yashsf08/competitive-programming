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

Node *solve(Node *head1, Node *head2) {

  Node *prev = head1;
  Node *curr = head1->next;

  print(head1);
  print(head2);

  if (curr == NULL) {
    prev->next = head2;
    return prev;
  }

  cout << "Now here" << endl;

  while (curr != NULL && head2 != NULL) {
    cout << "prev: " << prev->data << endl;
    cout << "curr: " << curr->data << endl;
    cout << "head: " << head2->data << endl;
    cout << " -------------------------- " << endl;

    if (prev->data <= head2->data && head2->data <= curr->data) {
      Node *temp = head2->next;
      prev->next = head2;
      head2->next = curr;

      prev = prev->next;
      head2 = temp;

    } else {
      prev = curr;
      curr = curr->next;
    }
  }

  if (head2 != NULL) {
    prev->next = head2;
  }

  return head1;
}

Node *mergeLists(Node *&head1, Node *&head2) {
  if (head1 == NULL) {
    return head2;
  }

  if (head2 == NULL) {
    return head1;
  }

  if (head1->data <= head2->data) {
    return solve(head1, head2);
  } else {
    return solve(head2, head1);
  }
}

int main(int argc, char *argv[]) {
  Node *head1 = new Node(0);
  push_back(head1, 2);
  push_back(head1, 4);
  push_back(head1, 5);
  push_back(head1, 9);

  Node *head2 = new Node(1);
  push_back(head2, 3);
  push_back(head2, 4);
  push_back(head2, 6);
  push_back(head2, 8);

  print(head1);
  print(head2);
  cout << " ----------------------------------------- " << endl;
  Node *result = mergeLists(head1, head2);
  print(result);

  return 0;
}
