#include <bits/stdc++.h>

/*
  Print N*N Matrix
*/

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int i;
  i = 1;
  while (i <= n) {
    int j = 1;
    char a = 'A' + i - 1;
    while (j <= n) {
      cout << a << " ";
      j++;
    }
    cout << endl;
    i++;
  }
}
