#include <bits/stdc++.h>

/*
  Print N*N Matrix as triangle with each row starting as row number.
*/

using namespace std;

// int main(int argc, char *argv[]) {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n) {
//     int j = 1, row = i;
//     while (j <= i) {
//       cout << row << " ";
//       row++;
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
      int i = 1;
    while (i <= n) {
    // alternate version - w/o using j
    int j = 1;
    while (j <= i) {
      cout << i+j-1 << " ";
        j++;
      }
    cout << endl;
      i++;
    }
}

