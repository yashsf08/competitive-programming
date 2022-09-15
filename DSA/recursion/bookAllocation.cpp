#include <bits/stdc++.h>

/*
  Program of Book Allocation problem using recursion.
*/

using namespace std;

int sumOfElements(int arr[], int size) {

  if (size == 0)
    return 0;

  return arr[0] + sumOfElements(arr + 1, size - 1);
}

bool isPossible(int arr[], int size, int m, int mid) {

  int count = 1;
  int i = 0;
  int temp = 0;

  while (i < size) {

    if (temp + arr[i] > mid) {
      count++;
      temp = 0;
    }
    if (count > m || arr[i] > mid)
      return false;

    temp += arr[i];
    i++;
  }

  return true;
}

int bookAllocation(int arr[], int size, int m, int start, int end) {
  int mid = start + (end - start) / 2;

  if (start > end)
    return mid;

  if (isPossible(arr, size, m, mid)) {
    int result = bookAllocation(arr, size, m, start, mid - 1);
    return (result < mid) ? result : mid;
  } else {
    int result = bookAllocation(arr, size, m, mid + 1, end);
    return result;
  }
}

int main(int argc, char *argv[]) {
  int arr[] = {10, 20, 30, 40};
  int m = 2;
  int max = sumOfElements(arr, sizeof(arr) / 4);
  int result = bookAllocation(arr, sizeof(arr) / 4, m, 0, max);
  cout << result << endl;
  return 0;
}
