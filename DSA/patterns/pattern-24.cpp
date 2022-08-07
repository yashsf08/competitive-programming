#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n - i + 1) {
      cout << j << " ";
      j++;
    }

    int k = 1;
    while (k < i) {
      cout << "* * ";
      k++;
    }

    int l = n - i + 1;
    while (l) {
      cout << l << " ";
      l--;
    }
    cout << endl;
    i++;
  }
  return 0;
}
