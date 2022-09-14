#include <bits/stdc++.h>

/*
  Program to find the peak index in an array.
*/

using namespace std;

int peakIndexPyramid(int arr[], int start, int end) {
  int mid = start + (end - start) / 2;

  if (start >= end) {
    return mid;
  }

  if (arr[mid] <= arr[mid + 1]) {
    int result = peakIndexPyramid(arr, mid + 1, end);
    return result;
  } else {
    int result = peakIndexPyramid(arr, start, mid);
    return result;
  }
}

int main(int argc, char *argv[]) {
  int arr[] = {5, 6, 3, 2, 1};
  // int arr[] = {5, 6, 7, 3, 2, 1};
  cout << peakIndexPyramid(arr, 0, sizeof(arr) / 4) << endl;
  return 0;
}
