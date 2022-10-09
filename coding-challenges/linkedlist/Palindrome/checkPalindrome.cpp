#include <bits/stdc++.h>

/*
  Program to check palindrome in a linked list.
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

bool solve(vector<int> &count) {
  printVector(count);
  int start = 0, end = count.size() - 1;
  while (start < end) {
    if (count[start] != count[end]) {
      return false;
    }
    start++;
    end--;
  }
  return true;
}

Node *get_middle(Node *head) {

  if (head == NULL || head->next == NULL) {
    return head;
  }

  Node *slow = head;
  Node *fast = head;

  while (fast != NULL && fast->next != NULL) {

    fast = fast->next->next;
    slow = slow->next;
  }

  if (fast != NULL) {
    return slow->next;
  }

  return slow;
}

Node *reverse_list(Node *head) {

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

bool isPalindrome(Node *&head) {
  /* 
  Complexity:
  push_back(head, 0);
  time - O(n)
  space - O(1)
  */

  if (head == NULL || head->next == NULL) {
    return true;
  }

  // get get_middle & reverse_list
  Node *head2 = reverse_list(get_middle(head));

  // now run loop
  while (head2 != NULL) {
    cout << head2->data << endl;

    if (head2->data != head->data) {
      return false;
    }

    head2 = head2->next;
    head = head->next;
  }

  return true;
}

bool checkPalin(Node *&head) {
  /* 
  Complexity:
  push_back(head, 0);
  time - O(n)
  space - O(n) {for saving extra array of length n}
  */

  if (head == NULL || head->next == NULL) {
    return true;
  }

  vector<int> count;

  Node *temp = head;
  // Copying the list to array
  while (temp != NULL) {
    count.push_back(temp->data);
    temp = temp->next;
  }

  return solve(count);
}

int main(int argc, char *argv[]) {
  Node *head = new Node(0);
  push_back(head, 1);
  push_back(head, 2);
  push_back(head, 5);
  push_back(head, 5);
  push_back(head, 2);
  push_back(head, 1);
  push_back(head, 0);

  print(head);
  cout << " ----------------------------------------- " << endl;

  if (isPalindrome(head)) {
    cout << "It is a palindrome!" << endl;
  } else {
    cout << "It is not a palindrome" << endl;
  }
  return 0;
}
