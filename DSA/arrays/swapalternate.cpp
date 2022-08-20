#include <bits/stdc++.h>

/*
  Program to swap alternate index number in a given array.
*/

using namespace std;

void swapAlternate(int arr[], int n) {
  int i = 0;
  int temp = 0;
  while (i < n) {
    temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;

    i += 2;
  }
  return;
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = 10;

  swapAlternate(arr, n);
  printArray(arr, n);

  return 0;
}
