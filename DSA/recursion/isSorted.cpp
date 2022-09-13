#include <bits/stdc++.h>

/*
  Program to check whether the array is sorted using recursion.
*/

using namespace std;

bool isSorted(int arr[], int size) {

  if (arr[0] > arr[1]) {
    return false;
  }

  if (size == 0 || size == 1) {
    return true;
  }

  return isSorted(arr + 1, size - 1);
}

int main(int argc, char *argv[]) {
  int arr[] = {1, 2, 3, 4, 5, 6};
  bool result = isSorted(arr, sizeof(arr)/4);
  cout<<sizeof(arr)/4<<endl;
  if (result) {
    cout<<"The Array is sorted.";
  } else {
    cout<<"The Array is not sorted.";
  }
  return 0;
}
