#include <bits/stdc++.h>

/*
  Implement insertion sort using recursion.
*/

using namespace std;

void printArray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
  return;
}

void insertionSort(int *arr, int size) {

  if (size == 1 || size == 0) {
    return;
  }

  for (int i = 1; i < size; i++) {
    if (arr[0] > arr[i]) {
      swap(arr[0], arr[i]);
    }
  }

  insertionSort(arr+1, size - 1);
}

int main(int argc, char *argv[]) {

  int arr[] = {5, 6, 3, 1, 9};
  // int arr[] = {5, 6, 3, 1, 9, 1, 3, 4, 59};
  insertionSort(arr, sizeof(arr) / 4);
  printArray(arr, sizeof(arr) / 4);

  return 0;
}
