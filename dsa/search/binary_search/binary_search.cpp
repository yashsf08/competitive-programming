#include <bits/stdc++.h>

using namespace std;

/*
  Prerequisite: follows monotonous function (ie, should be asc or desc order)
  Time Complexity O(log n)
*/

int binary_search(int arr[], int size, int key) {

  int start = 0;
  int end = size - 1;
  int mid = (start + end) / 2;

  while (start <= end) {

    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = (start + end) / 2;
  }

  return -1;
}

int main() {
  int n;
  int even[] = {1, 2, 3, 4, 5, 6, 8, 9, 20, 100};
  int odd[] = {11, 13, 15, 17, 19};
  int result = binary_search(odd, 5, 19);
  cout << result << endl;
  if (result != -1) {
    cout << "element is found" << endl;
  } else {
    cout << "couldn't find the element" << endl;
  }

  cout << endl;

  return 0;
}
