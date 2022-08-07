#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      cout << i - j + 1;
      j++;
    }
    i++;
    cout << endl;
  }
  return 0;
}
