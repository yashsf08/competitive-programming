#include <bits/stdc++.h>

/*
  Program to perform bubble sort.
  Best Case: O(n)
  Worst Case: O(n^2)

*/

using namespace std;

void printArray(vector<int> &arr) {
  for (auto i : arr)
    cout << i << " ";
  return;
}

vector<int> bubbleSort(vector<int> &arr, int n) {

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  return arr;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {9, 5, 4, 3, 2, 1, 9, 7, 8, 11};
  vector<int> result = bubbleSort(arr, arr.size());
  printArray(result);
  return 0;
}
