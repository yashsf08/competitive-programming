#include <bits/stdc++.h>

/*
  Program to check whether the array is sorted or sorted and cyclic.

  Complexity: O(n)
  */

using namespace std;

bool check(vector<int> &arr, int n) {
  int count = 0;

  for (int i = 0; i < arr.size() - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      count++;
      if (count > 1)
        return false;
    }
  }

  if (arr[n - 1] > arr[0]) {
    count++;
  }

  return count <= 1;
}

int main(int argc, char *argv[]) {

  vector<int> arr = {6, 8, 10, 2, 5};

  if (check(arr, arr.size())) {
    cout << "Array is sorted!" << endl;
  } else {
    cout << "Array is not sorted!" << endl;
  }

  return 0;
}
