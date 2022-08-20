#include <bits/stdc++.h>

/*
  Program to check the occurance of all the integer is unique.

  -1000 <= arr[i] <= 1000
  1 <= arr.length <= 1000

*/

using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

bool uniqueSequence(int arr[], int n) {
  vector<int> m(2001);

  for (int i = 0; i < n; i++) {
    m[arr[i]] += 1;
  }

  sort(m.begin(), m.end());

  for (int i = 1; i < m.size(); i++) {

    if (m[i] && m[i] == m[i - 1]) {
      cout << m[i] << endl;
      return 0;
    }
  }

  return 1;
}

int main(int argc, char *argv[]) {

  int arr[] = {1, 2, 3, 3, 2, 1, 1, 1, 1};
  int result = uniqueSequence(arr, 9);
  // printArray(arr, 2001);
  if (result)
    cout << "Unique Sequences are present in the array.";
  else
    cout << "One or more Sequences are not unique.";

  return 0;
}
