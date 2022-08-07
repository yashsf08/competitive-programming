#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    // for printing space;
    int space = n - i;

    while (space) {
      cout << "  ";
      space--;
    }

    // for printing numbers
    int j = 1;
    while (j <= i) {
      cout << j << " ";
      j++;
    }

    // for nubmers
    int k = 1;
    while (k < i) {
      cout << i - k << " ";
      k++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
