#include <bits/stdc++.h>

using namespace std;

int firstOccurance(vector<int> &arr, int size, int key) {
  int start = 0, end = size - 1;
  int mid = start + (end - start) / 2;
  int result = -1;

  while (start <= end) {
    if (arr[mid] == key) {
      result = mid;
      end = mid - 1;
    } else if (arr[mid] < key) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }

  return result;
}

int lastOccurance(vector<int> &arr, int size, int key) {
  int start = 0, end = size - 1;
  int result = -1;
  int mid = start + (end - start) / 2;

  while (start <= end) {
    if (arr[mid] == key) {
      result = mid;
      start = mid + 1;
    } else if (arr[mid] < key) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }

  return result;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {1, 2, 2, 2, 2, 7, 9};
  int first = firstOccurance(arr, arr.size(), 2);
  int last = lastOccurance(arr, arr.size(), 2);
  if (first || last) {
    cout << "Found the first occurance of the element at: " << first << endl;
    cout << "Found the last occurance of the element at: " << last << endl;
  } else
    cout << "Element is missing.";
  return 0;
}
