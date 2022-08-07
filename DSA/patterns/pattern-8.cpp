#include <bits/stdc++.h>

/*
  Print N*N Matrix as triangle wiht count.
*/

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int i = 1;
  int count = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      cout << count << " ";
      count++;
      j++;
    }
    i++;
    cout << endl;
  }
}
