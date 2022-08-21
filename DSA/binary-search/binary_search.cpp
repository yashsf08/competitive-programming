#include <bits/stdc++.h>

// Program to perofrm simple binary search.

using namespace std;

int binarysearch(vector<int> &arr, int size, int s) {
  int start = 0, end = size - 1;
  int mid = (start + end) / 2;
  // int mid = 0;

  while (start <= end) {

    if (arr[mid] == s) {
      return mid;
    } else if (arr[mid] < s) {
      start = mid + 1;
      mid = (start + end) / 2;
    } else {
      end = mid - 1;
      mid = (start + end) / 2;
    }
  }
  return -1;
}

int main(int argc, char *argv[]) {
  int s = 6;
  // vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  vector<int> arr = {2, 4, 5, 6, 9, 10, 16};

  int result = binarysearch(arr, arr.size(), s);
  if (result) {
    cout << "Found Element";
  } else {
    cout << "Could not find the element";
  }

  return 0;
}
