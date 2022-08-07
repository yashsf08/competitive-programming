#include <bits/stdc++.h>

using namespace std;

// Alternate Version

// int main(int argc, char *argv[]) {
//   int n;
//   cin >> n;
//
//   int i = 1;
//   while (i <= n) {
//     int j = 1;
//     while (j <= i) {
//       char a = 'A' + i + j - 2;
//       cout << a << " ";
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
    int j = 1;
    char a = 'A' + i - 1;
    while (j <= i) {
      cout << a << " ";
      a++;
      j++;
    }
    cout << endl;
    i++;
  }
}
