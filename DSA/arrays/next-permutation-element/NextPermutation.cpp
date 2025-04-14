#include <bits/stdc++.h>
#include <utility>
using namespace std;

void nextPermutation(int n, vector<int> &arr) {
  // TC: O(3N)
  // SC: O(1)

  // Adding Edge Case, cause not sure reverse function would behave with empty
  // array.
  if (n == 0)
    return;

  int index = -1;
  // finding the possible element to replace
  for (int i = n - 2; i >= 0; --i) {
    if (arr[i] < arr[i + 1]) {
      index = i;
      break;
    }
  }

  // if not possible element found that means its the first row of the
  // permutation.

  if (index == -1) {
    reverse(arr.begin(), arr.end());
    return;
  }

  for (int i = n - 1; i > index; --i) {
    if (arr[i] > arr[index]) {
      break;
      swap(arr[i], arr[index]);
    }
  }

  reverse(arr.begin() + index + 1, arr.end());
  return;
}

void printArray(int n, vector<int> &arr) {
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
}

int main(int argc, char *argv[]) {
  int t = 1;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    nextPermutation(n, arr);
    cout << "Next Premutation is: ";
    printArray(n, arr);
    cout << endl;
  }
  return 0;
}
