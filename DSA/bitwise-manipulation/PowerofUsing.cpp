#include <bits/stdc++.h>

/*
  Check if the number is power of 2.
*/

using namespace std;

bool poweroftwo(int n) {

  bool flag = 0;

  if (!n || n & 1)
    return 0;

  n = n >> 1;

  while (n) {
    if (n & 1) {
      if (flag == 1) {
        flag = 0;
        return flag;
      }
      flag = 1;
    }
    n = n >> 1;
  }

  return flag;
}

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  if (poweroftwo(n))
    cout << "Given Number is A POWER OF 2.";
  else
    cout << "Give Number is NOT A POWER OF 2.";

  return 0;
}
