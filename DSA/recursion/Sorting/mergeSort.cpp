#include <bits/stdc++.h>

/*
  Program to implement mergeSort using recursion.
*/

using namespace std;

void printArray(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
  return;
}

void merge(int *arr, int start, int end) {

  int mid = start + (end - start) / 2;

  int len1 = mid - start + 1;
  int len2 = end - mid;

  int *brr = new int[len1];
  int *crr = new int[len2];
  int k = start;

  for (int i = 0; i < len1; i++) {
    brr[i] = arr[k++];
  }

  k = mid + 1;

  for (int j = 0; j < len2; j++) {
    crr[j] = arr[k++];
  }

  int brrIndex = 0;
  int crrIndex = 0;
  k = start;

  while (brrIndex < len1 && crrIndex < len2) {

    if (brr[brrIndex] <= crr[crrIndex]) {
      arr[k++] = brr[brrIndex++];
    } else {
      arr[k++] = crr[crrIndex++];
    }
  }

  while (brrIndex < len1) {

    arr[k++] = brr[brrIndex++];
  }

  while (crrIndex < len2) {
    arr[k++] = crr[crrIndex++];
  }

  return;
}

void mergeSort(int *arr, int start, int end) {

  int mid = start + (end - start) / 2;

  if (start >= end) {
    return;
  }

  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);

  merge(arr, start, end);

  return;
}

int main(int argc, char *argv[]) {

  int arr[] = {7, 5, 4, 3, 6, 7, 2, 1, 10};
  mergeSort(arr, 0, sizeof(arr) / 4 - 1);
  printArray(arr, sizeof(arr) / 4);

  return 0;
}
