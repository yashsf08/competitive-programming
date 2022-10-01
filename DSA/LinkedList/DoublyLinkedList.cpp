#include <bits/stdc++.h>

using namespace std;

class Node {
public:
  int data;
  Node *prev;
  Node *next;

  Node(int d) {
    this->data = d;
    this->prev = NULL;
    this->next = NULL;
  }

  ~Node() {
    this->next = NULL;
    this->prev = NULL;
    cout << "Freed the memory: " << this->data << endl;
  }
};

// Traversal
void printLL(Node *&tail) {

  if (tail == NULL) {
    cout << "List is empty." << endl;
    return;
  }

  if (tail->next == NULL) {
    cout << tail->data << endl;
    return;
  }

  Node *temp = tail->next;

  while (temp != tail) {
    cout << temp->data << endl;
    temp = temp->next;
  }

  return;
}

void print(Node *&head) {

  if (head == NULL) {
    cout << "List is empty." << endl;
    return;
  }

  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
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

// Insertion

void push_front(Node *&head, Node *&tail, int d) {
  Node *nodeToInsert = new Node(d);

  if (head == NULL) {
    head = tail = nodeToInsert;
    return;
  }

  nodeToInsert->next = head;
  head->prev = nodeToInsert;
  head = nodeToInsert;

  return;
}

void push_back(Node *&head, Node *&tail, int d) {
  Node *nodeToInsert = new Node(d);

  if (tail == NULL) {
    head = tail = nodeToInsert;
    return;
  }

  tail->next = nodeToInsert;
  nodeToInsert->prev = tail;
  tail = nodeToInsert;

  return;
}

void insertAt(Node *&head, Node *&tail, int position, int d) {

  if (head == NULL || tail == NULL) {
    cout << "list is empty." << endl;
    return;
  }

  if (position == 1) {
    push_front(head, tail, d);
    return;
  }

  int cnt = 1;
  Node *curr = head;

  while (cnt < position - 1) {
    curr = curr->next;
    if (curr == NULL) {
      cout << "Invalid Location!" << endl;
      return;
    }
    // cout << curr->data << endl;
    cnt++;
  }

  if (curr->next == NULL) {
    push_back(head, tail, d);
    return;
  }

  Node *temp = new Node(d);
  temp->next = curr->next;
  temp->prev = curr;
  curr->next->prev = temp;
  curr->next = temp;

  return;
}

// Deletion

void pop_front(Node *&head, Node *&tail) {
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

void pop_back(Node *&head, Node *&tail) {
  if (tail == NULL) {
    cout << "List is empty." << endl;
  }

  Node *temp = tail;

  if (head->next == NULL) {
    head = tail = NULL;
    delete tail;
    return;
  }

  tail = tail->prev;
  tail->next = NULL;

  delete temp;

  return;
}

void deleteAt(Node *&head, Node *&tail, int position) {
  if (head == NULL) {
    cout << "List is empty." << endl;
  }

  if (position == 1) {
    pop_front(head, tail);
    return;
  }

  Node *curr = head;
  int cnt = 1;
  while (cnt < position) {
    curr = curr->next;

    if (curr == NULL) {
      cout << "Invalid index position." << endl;
      return;
    }
    cnt++;
  }

  if (curr == tail) {
    pop_back(head, tail);
    return;
  }

  curr->prev->next = curr->next;
  curr->next->prev = curr->prev;
  delete curr;

  return;
}

int main(int argc, char *argv[]) {
  Node *node1 = new Node(10);
  Node *head, *tail;
  head = tail = node1;
  push_back(head, tail, 9);
  print(head);

  get_length(head);

  cout << "-----------------------" << endl;

  insertAt(head, tail, 1, 50);
  print(head);
  insertAt(head, tail, 4, 51);
  print(head);
  insertAt(head, tail, 2, 55);
  print(head);
  cout << head->data << endl;
  cout << tail->data << endl;

  deleteAt(head, tail, 5);
  print(head);
  cout << head->data << endl;
  cout << tail->data << endl;
  deleteAt(head, tail, 2);
  print(head);
  cout << head->data << endl;
  cout << tail->data << endl;
  deleteAt(head, tail, 1);
  print(head);
  cout << head->data << endl;
  cout << tail->data << endl;
  return 0;
}
