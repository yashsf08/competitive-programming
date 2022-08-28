#include <bits/stdc++.h>

/*

  Give an array of elements where each element represent a location number.
  also,  given minimum distance between 2 cows. find the maximum distance so
  that the cows don't fight each other.

  3 2
  1 2 3
  output: - 2 // which is the maximum distance between them

  5 2
  4 2 1 3 6
  output: - 5

  BruteForce O(n^2)
  binarySearch O(nlogn)

*/

using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int mid) {

  int k = arr[0];
  int countCow = 0;

  for (int i = 1; i < arr.size(); i++) {

    if (arr[i] - k >= mid) {
      countCow++;
      if (countCow == k) {
        return true;
      }
      k = arr[i];
    }
  }

  return false;
}

int aggresiveCows(vector<int> &arr, int n, int m) {
  sort(arr.begin(), arr.end());
  int ans = -1;
  int start = 0, end;

  int xmin = 0, xmax = -1;

  for (int i = 0; i < arr.size(); i++) {
    xmax = max(arr[i], xmax);
  }

  end = xmax;
  int mid = start + (end - start) / 2;

  while (start <= end) {

    if (isPossible(arr, n, m, mid)) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }

  return ans;
}

int main(int argc, char *argv[]) {
  // vector<int> arr = {1, 2, 3, 4, 6};
  // vector<int> arr = {4, 2, 1, 3, 6};
  vector<int> arr = {1, 2, 3};
  int result = aggresiveCows(arr, arr.size(), 2);
  cout << "max value is: " << result << endl;

  return 0;
}
