#include <bits/stdc++.h>

/*
  Print N*N Matrix with col as num of rows!
*/

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      cout << "* ";
      j++;
    }
    i++;
    cout << endl;
  }
  return 0;
}
