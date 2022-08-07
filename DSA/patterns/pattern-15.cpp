#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int i = 1;
  char a = 'A';
  while (i <= n) {
    int j = 1;
    while (j <= i) {

      cout << a << " ";
      a++;
      j++;
    }
    cout << endl;
    i++;
  }
}
