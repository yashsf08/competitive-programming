#include <bits/stdc++.h>

/*
  Given books with number of pages allocation each book to people such that the
  maximum page to a person in minimum.
*/

using namespace std;

// bool isPossible(vector<int> &arr, int n, int m, int mid) {
//
//
// }

// int bookAllocation(vector<int> &arr, int n, int m) {
//
//   // Write your code here.
//
//   int s = 0;
//   int sum = 0;
//
//   for (int i = 0; i < n; i++) {
//     sum += arr[i];
//   }
//
//   int e = sum;
//   int ans = -1;
//   int mid = s + (e - s) / 2;
//
//   while (s <= e) {
//     if (isPossible(arr, n, m, mid)) {
//       ans = mid;
//       e = mid -1;
//     }
//
//   else {
//       s = mid + 1;
//     }
//     mid = s +(e-s)/2;
//   }
//   return ans;
// }

bool isPossible(vector<int> &arr, int n, int m, int mid) {

  int pageSum = 0;
  int personCount = 1;

  for (int i = 0; i < n; i++) {

    if (pageSum + arr[i] <= mid) {
      pageSum += arr[i];
    } else {
      personCount++;
      if (personCount > m || arr[i] > mid) {
        return false;
      }

      pageSum = arr[i];
    }
  }

  return true;
}

int bookAllocation(vector<int> &arr, int n, int m) {

  int ans = -1;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  int start = 0;
  int end = sum;

  int mid = start + (end - start) / 2;

  while (start <= end) {

    if (isPossible(arr, n, m, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }

    mid = start + (end - start) / 2;
  }

  return ans;
}

int main(int argc, char *argv[]) {

  vector<int> arr = {12, 34, 67, 90};
  vector<int> brr = {5, 17, 100, 11};
  int result = bookAllocation(arr, arr.size(), 2);
  cout << "minimum of maximum is: " << result << endl;
  result = bookAllocation(brr, brr.size(), 4);
  cout << "Minimum of Maximum is: " << result << endl;

  return 0;
}
