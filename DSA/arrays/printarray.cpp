#include <bits/stdc++.h>

/*
  Program to print values inside the array.
*/

using namespace std;

void printarray(int arr[]) {
  int n = sizeof(arr);
  cout<<"size of n: ";
  cout << n << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
}

int main(int argc, char *argv[]) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << sizeof(arr) / sizeof(arr[0]) << endl;
  printarray(arr);

  return 0;
}
