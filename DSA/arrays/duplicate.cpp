#include <bits/stdc++.h>

using namespace std;

int checkDuplicateBrute(int arr[], int brr[], int n, int m) {
  int count = 0;
  for (int i = 0; i < n; i++) {

    for (int j = 0; j < m; j++) {
      if (arr[i] > brr[j]) {
        break;
      } else if (arr[i] == brr[j]) {
        cout << "inside count" << endl;
        count++;
        break;
      }
    }
  }
  return count;
}

void printArray(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {

  int arr[] = {1, 2, 2, 2, 3, 4};
  int brr[] = {2, 2, 3, 3};

  int count = checkDuplicateBrute(arr, brr, 6, 4);
  cout << "Number of common elements are: " << count << endl;

  return 0;
}
