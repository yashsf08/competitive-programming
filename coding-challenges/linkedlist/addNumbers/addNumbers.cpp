#include <bits/stdc++.h>

/*
  Add two numbers represented by two linked list.
  Where each node represents a single digit.

  Complexity:
  time - O(n+m)
  space - O(n+m)
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

void printVector(vector<int> &arr) {
  for (auto i : arr) {
    cout << i << " ";
  }
  cout << endl;
}

Node *reverse_list(Node *head) {
  if (head == NULL || head->next == NULL) {
    return head;
  }

  Node *prev = NULL;
  Node *curr = head;
  Node *temp = NULL;

  while (curr != NULL) {
    temp = curr->next;
    curr->next = prev;

    prev = curr;
    curr = temp;
  }

  return prev;
}

Node *add_numbers(Node *&head1, Node *&head2) {
  Node *temp1 = reverse_list(head1);
  Node *temp2 = reverse_list(head2);
  Node *result = NULL;

  int carry = 0;
  while (temp1 != NULL && temp2 != NULL) {
    int sum = temp1->data + temp2->data + carry;
    carry = sum / 10;
    push_back(result, sum % 10);
    temp1 = temp1->next;
    temp2 = temp2->next;
  }

  while (temp1 != NULL) {
    int sum = temp1->data + carry;
    carry = sum / 10;
    push_back(result, sum % 10);
    temp1 = temp1->next;
  }

  while (temp2 != NULL) {
    int sum = temp2->data + carry;
    carry = sum / 10;
    push_back(result, sum % 10);
    temp2 = temp2->next;
  }

  while (carry != 0) {
    push_back(result, carry % 10);
    carry /= 10;
  }

  return reverse_list(result);
}

int main(int argc, char *argv[]) {
  Node *head1 = new Node(2);
  Node *head2 = new Node(9);

  push_back(head1, 1);
  push_back(head1, 2);
  push_back(head1, 3);
  push_back(head2, 1);
  push_back(head2, 2);
  push_back(head2, 3);

  print(head1);
  print(head2);
  cout << " ----------------------------------------- " << endl;
  Node *result = add_numbers(head1, head2);
  print(result);
  return 0;
}
