#include <bits/stdc++.h>

/*
  Program to perform binary search in cyclic/rotated array using Recursion.
*/

using namespace std;

int binarySearch(int arr[], int start, int end, int key) {

  int mid = start + (end - start) / 2;

  if (start > end) {
    return -1;
  }

  if (arr[mid] == key) {
    return mid;
  } else if (arr[mid] > key) {
    return binarySearch(arr, start, mid - 1, key);
  } else {
    return binarySearch(arr, mid + 1, end, key);
  }
}

int findPivotElement(int arr[], int start, int end) {

  int mid = start + (end - start) / 2;

  if (start >= end)
    return mid;

  if (arr[0] > arr[mid]) {
    return findPivotElement(arr, start, mid);
  } else {
    return findPivotElement(arr, mid + 1, end);
  }
}

int rotatedBinarySearch(int arr[], int start, int end, int key) {

  int pivotElement = findPivotElement(arr, start, end);

  if (arr[0] <= key) {
    return binarySearch(arr, start, pivotElement - 1, key);
  } else {
    return binarySearch(arr, pivotElement, end, key);
  }
}

int main(int argc, char *argv[]) {
  int arr[] = {5, 6, 7, 1, 2, 3};
  cout << rotatedBinarySearch(arr, 0, sizeof(arr) / 4, 7);
  cout << endl;
  return 0;
}
