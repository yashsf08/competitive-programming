#include <bits/stdc++.h>

/*
  Explain ways to initialize arrays.
*/

#define x1 1
#define x2 x1, x1
#define x3 x2, x2
#define x4 x3, x3

using namespace std;

void printArray(int arr[], int n) {
  int i = 0;
  while (i < n) {
    cout << arr[i] << " ";
    i++;
  }
  cout << endl;
}

int main(int argc, char *argv[]) {

  // First way
  int arr[10] = {1, 2, 3,
                 4, 5, 6}; // remaining values would be initialized to zero.
  cout << "Printing Arr..." << endl;
  printArray(arr, 6);

  int brr[] = {1, 2, 3, 4, 5};
  cout << "Printing Brr..." << endl;
  printArray(brr, 5);

  // Second way - Only works with extension.
  // int crr[10] = {[0 ... 9] = 1};

  // Third way - using macros
  int drr[10] = {x4};
  cout << "Printing Drr..." << endl;
  printArray(drr, 8);

  // Forth way
  // int err[100];
  // fill_n(err, 100);

  return 0;
}
