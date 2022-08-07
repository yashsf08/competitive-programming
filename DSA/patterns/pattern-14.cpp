#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int i = 0;
  while (i <= n) {
    int j = 1;
    char a = 'A' + i - 1;
    while (j <= i) {
      cout << a << " ";
      j++;
    }
    cout << endl;
    i++;
  }
}
