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
  char a = 'A';
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      cout << a << " ";
      j++;
      a++;
    }
    cout << endl;
    i++;
  }
}
