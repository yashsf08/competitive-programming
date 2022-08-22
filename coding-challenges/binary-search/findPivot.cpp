#include <bits/stdc++.h>

/*
  find pivot element index in a Pivot based array.
*/

using namespace std;

int findPivot(vector<int> &arr, int size) {
  int start = 0, end = size - 1;
  int mid = start + (end - start) / 2;

  while (start < end) {

    if (arr[mid] >= arr[0]) {
      start = mid + 1;
    } else {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }

  return mid;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {8, 9, 1, 2, 3};
  int result = findPivot(arr, arr.size());
  cout << "The Pivot element is at the index: " << result << endl;
  return 0;
}
