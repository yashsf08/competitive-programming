#include <bits/stdc++.h>

/*
  Given an array with with elements as number of walls to paint,
  Allocate given walls to each painter so that the work done by them is minimum.
*/

using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int mid) {

  int painterCount = 1;
  int unitSum = 0;

  for (int i = 0; i < n; i++) {
    if (unitSum + arr[i] <= mid) {
      unitSum += arr[i];
    } else {
      painterCount++;
      if (painterCount > m || arr[i] > m) {
        return false;
      }
      unitSum = arr[i];
    }
  }
  return true;
}

int painterBoard(vector<int> &arr, int n, int m) {

  int result = -1;
  int start = 0, end = n - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {
    if (isPossible(arr, n, m, mid)) {
      result = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }

  return result;
}

int main(int argc, char *argv[]) {

  vector<int> arr = {12, 34, 67, 90};
  vector<int> brr = {5, 17, 100, 11};
  int result = painterBoard(arr, arr.size(), 2);
  cout << "minimum of maximum is: " << result << endl;
  result = painterBoard(brr, brr.size(), 4);
  cout << "Minimum of Maximum is: " << result << endl;

  return 0;

}
