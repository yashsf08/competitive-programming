#include <bits/stdc++.h>

/*
  Program to find Pivot in a given array.
*/

using namespace std;

int findPivot(int arr[], int start, int end) {

  int mid = start + (end - start) / 2;
  cout << start << " " << end << endl;
  cout << mid << endl;
  cout << " ------------------------- " << endl;

  if (start >= end) {
    return arr[mid];
  }

  if (arr[0] > arr[mid]) {
    return findPivot(arr, start, mid);
  } else {
    return findPivot(arr, mid + 1, end);
  }
}

int main(int argc, char *argv[]) {
  int arr[] = {5, 6, 7, 1, 2, 3};
  int result = findPivot(arr, 0, sizeof(arr) / 4);
  cout << result << endl;
  return 0;
}
