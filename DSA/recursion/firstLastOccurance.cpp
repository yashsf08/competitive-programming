#include <bits/stdc++.h>

/*
  Program to find first and last Occurance of the given element in the Array.
*/

using namespace std;

int firstOccurance(int arr[], int start, int end, int key) {
  int mid = start + (end - start) / 2;

  if (start > end) {
    return -1;
  }

  if (arr[mid] == key) {
    int result = firstOccurance(arr, start, mid - 1, key);
    return ((result < mid && result != -1) ? result : mid);
  } else if (arr[mid] < key) {
    return firstOccurance(arr, mid + 1, end, key);
  } else {
    return firstOccurance(arr, start, mid - 1, key);
  }
}

int lastOccurance(int arr[], int start, int end, int key) {
  int mid = start + (end - start) / 2;

  if (start > end) {
    return -1;
  }

  if (arr[mid] == key) {
    int result = lastOccurance(arr, mid + 1, end, key);
    return (result > mid) ? result : mid;
  } else if (arr[mid] < key) {
    return lastOccurance(arr, mid + 1, end, key);
  } else {
    return lastOccurance(arr, start, mid - 1, key);
  }
}

int main(int argc, char *argv[]) {

  int arr[] = {1, 2, 3, 3, 3, 3, 4, 5};

  cout << firstOccurance(arr, 0, sizeof(arr) / 4, 3) << endl;
  cout << lastOccurance(arr, 0, sizeof(arr) / 4, 3) << endl;

  return 0;
}
