#include <bits/stdc++.h>

using namespace std;

/*
  Given an Array, and a target element find all the indexes for the element.

*/

void printArray(vector<int> &arr, int n) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
}

int firstOccurance(vector<int> &arr, int n, int key) {
  int start = 0, end = n - 1;
  int mid = start + (end - start) / 2;
  int result = -1;

  while (start <= end) {
    if (arr[mid] == key) {
      result = mid;
      end = mid - 1;
    } else if (arr[mid] > key) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return result;
}

int lastOccurance(vector<int> &arr, int n, int key) {
  int start = 0, end = n - 1;
  int mid = start + (end - start) / 2;
  int result = -1;

  while (start <= end) {
    if (arr[mid] == key) {
      result = mid;
      start = mid + 1;
    } else if (arr[mid] > key) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return result;
}

vector<int> targetIndices(vector<int> &arr, int target) {

  sort(arr.begin(), arr.end());
  vector<int> result;
  int i = firstOccurance(arr, arr.size(), target);
  int j = lastOccurance(arr, arr.size(), target);
  // cout << "i : " << i << endl;
  // cout << "j : " << j << endl;

  if (i == -1)
    return result;

  for (int k = i; k <= j; k++) {
    result.push_back(k);
  }

  // if (i > -1) {
  //
  //   while (i < arr.size()) {
  //     if (arr[i] == target) {
  //       result.push_back(i);
  //     }
  //
  //     i++;
  //   }
  // }

  return result;
}

int main(int argc, char *argv[]) {

  vector<int> arr = {1, 2, 5, 2, 3};
  // vector<int> arr = {1};
  // vector<int> result = targetIndices(arr, 2);
  // vector<int> result = targetIndices(arr, 3);
  // vector<int> result = targetIndices(arr, 5);
  vector<int> result = targetIndices(arr, 2);
  printArray(result, result.size());
  return 0;
}
