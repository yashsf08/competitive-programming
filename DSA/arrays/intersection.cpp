#include <bits/stdc++.h>

/*
  Program to find the intersection of two arrays.
  Note: - the arrays are in the sorted order.
*/

using namespace std;

void printVector(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << endl;
  }
  return;
}

void intersection(vector<int> &arr, vector<int> &brr) {

  vector<int> result;

  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < brr.size(); j++) {
      if (brr[j] > arr[i])
        break;
      if (arr[i] == brr[j]) {

        result.push_back(arr[i]);
        brr[j] = INT_MIN;
        break;
      }
    }
  }

  printVector(result);
  return;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {0};
  vector<int> brr = {0};

  return 0;
}
