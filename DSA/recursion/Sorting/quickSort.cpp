#include <bits/stdc++.h>

/*

  Program to implement quickSort using recursion.

*/

using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int partition(int arr[], int start, int end) {

  int count = 0;
  int pivot = arr[start];

  // counting the number of integers greater than start.
  for (int i = start + 1; i <= end; i++) {
    if (pivot > arr[i]) {
      count++;
    }
  }

  int pivotIndex = start + count;
  swap(arr[start], arr[pivotIndex]);

  // arrange smaller element before pivotIndex and larger elements after
  // pivotIndex.
  int i = start, j = end;

  while (i < pivotIndex && j > pivotIndex) {

    while (arr[i] < arr[pivotIndex]) {
      i++;
    }

    while (arr[j] >= arr[pivotIndex]) {
      j--;
    }

    if (i < pivotIndex && j > pivotIndex) {
      swap(arr[i], arr[j]);
    }
  }

  return pivotIndex;
}

void quickSort(int arr[], int start, int end) {
  int mid = start + (end - start) / 2;

  if (start >= end) {
    return;
  }

  int p = partition(arr, start, end);

  quickSort(arr, start, p - 1);
  quickSort(arr, p + 1, end);
}

int main(int argc, char *argv[]) {

  int arr[] = {1, 7, 2, 9, 4, 7, 6};
  int size = sizeof(arr) / 4;

  quickSort(arr, 0, size - 1);
  printArray(arr, size);
}
