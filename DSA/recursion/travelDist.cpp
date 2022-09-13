#include <bits/stdc++.h>

// Program to reach destination using using recursion.


using namespace std;

void travel(int src, int des) {
  cout << "Current Location is: " << src << endl;
  if (src == des) {
    cout << "Reached Destination" << endl;
    return;
  }

  travel(++src, des);
  return;
}

int main(int argc, char *argv[]) {
  int src = 1, des = 10;
  travel(src, des);
  return 0;
}
