#include <bits/stdc++.h>

using namespace std;

/*
  Time Complexity O(n): n^2 , in general it is {n*(n+1)/2}
  Best Case           : N {almost impossible,  for this it has to be mostly
  sorted already}
*/

void selection_sort(int size, int arr[]) {

  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[i]) {
        swap(arr[i], arr[j]);
      }
    }
  }
}

void printArray(int size, int arr[]) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  int arr[] = {9, 8, 2, 5, 3, 1, 8, 10, 20, 19, 18, 17};

  int size = sizeof(arr) / sizeof(arr[0]);

  cout << "size of the array is " << size << endl;

  cout << "Array before sorting -----> " << endl;
  printArray(size, arr);
  selection_sort(size, arr);
  cout << "Array after sorting -----> " << endl;
  printArray(size, arr);

  return 0;
}
