#include <bits/stdc++.h>

/*
  search a value in a give array.
  return true if present , false if not.
*/

using namespace std;

bool search(int arr[], int n, int key) {

  bool result = 0;

  for (int i = 0; i < n; i++) {
    if (key == arr[i]) {
      result = 1;
      break;
    }
  }

  return result;
}

int main(int argc, char *argv[]) {
  int arr[] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
  int n = 10;
  int key = 1;

  if (search(arr, n, key))
    cout << "Element is present in the array.";
  else
    cout << "Element is not present in the array.";

  return 0;
}
