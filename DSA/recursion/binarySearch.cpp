#include <bits/stdc++.h>

/*
  Program to implement binary search using recursion.
*/

using namespace std;

int binarySearch(int arr[], int start, int end, int key) {

  int mid = start + (end - start) / 2;

  if (start > end)
    return -1;

  if (arr[mid] == key) {
    return mid;
  } else if (arr[mid] > key) {

    return binarySearch(arr, start, mid - 1, key);

  } else {
    return binarySearch(arr, mid + 1, end, key);
  }
}

int main(int argc, char *argv[]) {
  int arr[] = {1, 2, 3, 4, 5, 6};

  int result = binarySearch(arr, 0, sizeof(arr) / 4, 15);
  cout << result << endl;

  return 0;
}
