#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <pstl/glue_algorithm_defs.h>
#include <vector>

/* Time Complexity O(n log n)
 *
 * Rule: Divide and Merge
 *
 * Intuition:
 * this is a much better algorithm in terms of time complexity.
 * all the general sorting algorithms like Bubble Sort, Insertion Sort,
 * Selection Sort takes O(n) in order to sort the array. it is a much more
 * optimized sorting algorithm.
 *
 * */

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {

  int left = low;
  int right = mid + 1;
  vector<int> temp;

  while (left <= mid && right <= high) {
    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left]);
      left++;
    } else {
      temp.push_back(arr[right]);
      right++;
    }
  }

  while (left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }

  while (right <= high) {
    temp.push_back(arr[right]);
    right++;
  }

  for (int i = low; i <= high; i++) {
    arr[i] = temp[i - low];
  }

  return;
}

void mergeSort(vector<int> &arr, int low, int high) {

  if (low >= high)
    return;

  int mid = (low + high) / 2;

  mergeSort(arr, low, mid);
  mergeSort(arr, mid + 1, high);
  merge(arr, low, mid, high);

  return;
}

void printArray(vector<int> &arr, int size) {

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int n = 0;
  int size;
  int low;
  int high;

  /* vector<int> arr = {4, 1, 3, 9, 8, 10, 3, 5, 2}; */
  /* vector<int> arr = {4, 1}; */
  vector<int> arr = {4};
  /* vector<int> arr = {}; */
  size = arr.size();

  cout << "Size of the array is: " << size << endl;

  low = 0;
  high = size - 1;

  mergeSort(arr, low, high);

  printArray(arr, size);
  return 0;
}
