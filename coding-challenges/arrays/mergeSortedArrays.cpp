#include <bits/stdc++.h>

/*
  Program to merge to sorted arrays.
  Complexity: O(n+m)
*/

using namespace std;

void printArray(vector<int> &arr) {
  for (auto i : arr)
    cout << i << " ";
  cout << endl;
  return;
}

vector<int> mergeArrays(vector<int> &arr, vector<int> &brr, int n, int m) {
  vector<int> result;

  int i = 0, j = 0;
  while (i < n && j < m) {
    if (arr[i] < brr[j]) {
      result.push_back(arr[i++]);
    } else {
      result.push_back(brr[j++]);
    }
  }

  while (i < n) {
    result.push_back(arr[i++]);
  }

  while (j < m) {
    result.push_back(brr[j++]);
  }

  return result;
}

vector<int> mergeArrayAdv(vector<int> &arr, vector<int> &brr, int m, int n) {
  int i = m - 1;
  int j = n - 1;
  int k = m + n - 1;

  cout << "i : " << i << endl;
  cout << "j : " << j << endl;
  cout << "k : " << k << endl;

  while (i >= 0 && j >= 0) {

    if (arr[i] < brr[j]) {
      arr[k--] = brr[j--];
    } else {
      arr[k--] = arr[i--];
    }

    printArray(arr);
  }

  while (j >= 0) {
    arr[k--] = brr[j--];
  }

  return arr;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {1, 3, 5, 7, 9, 0, 0, 0};
  vector<int> brr = {2, 4, 6};

  int m = -1;
  // vector<int> result = mergeArrays(arr, brr, arr.size(), brr.size());
  for (int i = 0; i <= arr.size(); i++) {
    if (arr[i] == 0) {

      m = i;
      break;
    }
  }
  cout << m << endl;
  cout << "running the function" << endl;
  vector<int> result = mergeArrayAdv(arr, brr, m, brr.size());

  printArray(result);

  return 0;
}
