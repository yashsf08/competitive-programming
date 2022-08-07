
#include <bits/stdc++.h>

/*
  Print N*N Matrix with row numbers!
*/

using namespace std;

int main(int argc, char *argv[]) {

  int i=1;
  int n;
  cin >> n;
  // cout << "Value of i: " << i << endl;
  // cout << "Value of n: " << n << endl;

  while (i <= n) {
    int j=1;
    while (j <= n) {
      cout << i <<" ";
      j++;
    }
    cout << endl;
    i++;
  }
}
