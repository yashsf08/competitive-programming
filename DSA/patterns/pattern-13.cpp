#include <bits/stdc++.h>

/*
  Print N*N Matrix
*/

using namespace std;

// Alternate Version

// int main(int argc, char *argv[]) {
//   int n;
//   cin >> n;
//
//   int i;
//   i = 1;
//   while (i <= n) {
//     int j = 1;
//     while (j <= n) {
//       char a = 'A' + i + j - 2;
//       cout<<a<<" ";
//       j++;
//       // a++;
//     }
//     cout << endl;
//     i++;
//   }
// }

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
      a++;
    }
    cout << endl;
    i++;
  }
}
