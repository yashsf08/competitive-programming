#include <bits/stdc++.h>

/*
  Find the unique element in a given array of 2m+1 (odd number),
  where all the elements have a pair except 1 element.
*/

using namespace std;

int findUnique(int arr[], int n) {
  int result = 0;
  for (int i = 0; i < n; i++) {
    result = result ^ arr[i];
  }
  return result;
}

int main(int argc, char *argv[]) {
  int arr[] = {2, 3, 4, 3, 2};
  int n = 5;

  cout << "Unique Element in the array is: " << findUnique(arr, n) << endl;

  return 0;
}
