#include <bits/stdc++.h>

using namespace std;

/*
  Program to find the peak index in pyramid array.
*/

int pyramid(vector<int> &arr, int size) {
  int start = 0, end = size - 1;
  int mid = start + (end - start) / 2;

  while (start < end) {

    if (arr[mid] < arr[mid + 1]) {
      start = mid + 1;
    } else {
      end = mid;
    }

    mid = start + (end - start) / 2;
  }

  return mid;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {0, 2, 1, 0};
  int result = pyramid(arr, arr.size());
  cout << "Peak index in the pyramid is: " << result;
  return 0;
}
