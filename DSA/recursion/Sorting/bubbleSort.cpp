#include <bits/stdc++.h>

/*
  Implement bubble sort using recursion.
*/

using namespace std;

void printArray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
  return;
}

void bubbleSort(int *arr, int size) {

  if (size <= 1) {
    return;
  }

  for (int i = 0; i < size - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      swap(arr[i], arr[i + 1]);
    }
  }

  bubbleSort(arr, size - 1);
}

int main(int argc, char *argv[]) {

  // int arr[] = {5, 6, 3, 1, 9};
  int arr[] = {5, 6, 3, 1, 9, 1, 3, 4, 59};
  bubbleSort(arr, sizeof(arr) / 4);
  printArray(arr, sizeof(arr) / 4);

  return 0;
}
