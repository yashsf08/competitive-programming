#include <bits/stdc++.h>

/*
  find interection of all the three given arrays.
*/

using namespace std;

void printArray(vector<int> &arr, int n) {
  for (auto i : arr)
    cout << i << " ";
}

// Brute Force Approach
vector<int> arraysIntersection(vector<int> &arr, vector<int> &brr,
                               vector<int> &crr) {
  vector<int> result;
  vector<int> temp;

  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < brr.size(); j++) {
      if (arr[i] == brr[j]) {
        temp.push_back(arr[i]);
      }
    }
  }

  for (int i = 0; i < temp.size(); i++) {
    for (int j = 0; j < crr.size(); j++) {
      if (temp[i] == crr[j]) {
        result.push_back(temp[i]);
      }
    }
  }

  return result;
}

// Binary Search Based Approach
bool isAvailable(vector<int> &arr, int n, int k) {
  int start = 0, end = n - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {

    if (arr[mid] == k) {
      return true;
    } else if (arr[mid] < k) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }

  return false;
}

vector<int> arraysIntersectionBS(vector<int> &arr, vector<int> &brr,
                                 vector<int> &crr) {
  vector<int> result;

  for (int i = 0; i < arr.size(); i++) {
    if (isAvailable(brr, brr.size(), arr[i])) {
      if (isAvailable(crr, crr.size(), arr[i])) {
        result.push_back(arr[i]);
      }
    }
  }

  return result;
}

// 2 Pointer Approach

vector<int> arraysIntersectionP(vector<int> &arr, vector<int> &brr,
                                vector<int> &crr) {

  vector<int> result;
  int p1, p2, p3;
  p1 = p2 = p3 = 0;
  int m = 0;
  while (p1 < arr.size() && p2 < brr.size(), p3 < crr.size()) {
    if (arr[p1] == brr[p2] && brr[p2] == crr[p3])
      result.push_back(arr[p1]);
    m = min(arr[p1], min(brr[p2], crr[p3]));
    if (arr[p1] == m)
      ++p1;
    if (brr[p2] == m)
      ++p2;
    if (crr[p3] == m)
      ++p3;
  }

  return result;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {1, 2, 3, 4, 5};
  vector<int> brr = {1, 2, 5, 7, 9};
  vector<int> crr = {1, 3, 4, 5, 8};

  // vector<int> result = arraysIntersection(arr, brr, crr);
  // vector<int> result = arraysIntersectionBS(arr, brr, crr);
  vector<int> result = arraysIntersectionP(arr, brr, crr);
  printArray(result, result.size());

  return 0;
}
