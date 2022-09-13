#include <bits/stdc++.h>

/*
  Program to perform linearSearch impletmented using recursion.
*/

using namespace std;

bool linearSearch(int *arr, int size, int key) {

  if (size == 0)
    return false;

  if (key == arr[0]) {
    return true;

  } else {
    return linearSearch(arr + 1, size - 1, key);
  }
}

int main(int argc, char *argv[]) {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  if (linearSearch(arr, sizeof(arr) / 4, 11)) {
    cout << "Element Found.";
  } else {
    cout << "Element not Found.";
  }
  return 0;
}
