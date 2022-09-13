#include <bits/stdc++.h>

/*
  Program to calculate sum of elements in an Array nusing recursion.
*/

using namespace std;

int sumElem(int arr[], int size) {

  if (size == 0 || size == 1) {
    return arr[0];
  }

  return arr[0] + sumElem(arr + 1, size - 1);
}

int main(int argc, char *argv[]) {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int result = sumElem(arr, 6);
  cout << "Sum of Elements is: " << result << endl;
  return 0;
}
