#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int i = 1;
  while (i <= n) {
    int space;
    space = 1;
    while (space < i) {
      cout << "-"
           << " ";
      space++;
    }

    int astr;
    astr = n - i + 1;
    while (astr) {
      cout << "*"
           << " ";
      astr--;
    }

    cout << endl;
    i++;
  }
}
