#include <bits/stdc++.h>
/*
  Program to Reverese an array.
*/

using namespace std;

// complexity of reversing it O(n/2)
void reversearray(int arr[], int n) {
  int i = 0;
  int temp = 0;
  while (i < n / 2) {
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
    i++;
  }
}

void printarray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main(int argc, char *argv[]) {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  reversearray(arr, 10);
  printarray(arr, 10);

  return 0;
}
