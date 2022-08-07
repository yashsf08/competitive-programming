#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;

  int i = 1;
  int count = 1;
  while (i <= n) {
    int space;
    space = n - i;
    while(space) {
      cout<<"  ";
      space--;
    }

    int j = 1;
    while (j <= i) {
      cout<<count<<" ";
      j++;
      count++;
    }

    cout<<endl;
    i++;
  }

}
