#include <bits/stdc++.h>

// find the sqrt of a given number in O(log n) using binary Search.

using namespace std;

void printArray(vector<int> arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }
}

int binarySqrt(int n) {

  long long int ans = -1;
  int start = 0, end = n - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {

    long long int square = mid * mid;

    if (square <= n) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }

  return ans;
}

double advBinarySqrt(double n, int precision) {
  double ans = binarySqrt(n);
  double factor = 1;

  for (int i = 0; i < precision; i++) {
    factor = factor / 10;
    for (double j = ans; j * j <= n; j = j + factor) {

      ans = j;
    }
  }

  return ans;
}

int main(int argc, char *argv[]) {
  double n = 9.5;
  cout << "Square root of " << n << " is " << advBinarySqrt(n, 3) << endl;
  return 0;
}
