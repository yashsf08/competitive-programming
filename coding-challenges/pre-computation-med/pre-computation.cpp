#include <bits/stdc++.h>

/*
  Constraints:
  1 <= N <= 10^7
  1 <= M <= 2*10^5

*/

using namespace std;

const int N = 1e7 + 10;
int ar[N];

int main() {
  int n, m;
  cin >> n >> m;

  while (m--) {

    int a, b, d;
    cin >> a >> b >> d;

    for (int i = a; i <= b; i++) {
      ar[i] += d;
    }
  }

  int mx = -1;
  for (int i = 1; i <= n; i++) {
    cout << i << "th element is: >>" << ar[i] << endl;
    if (mx < ar[i]) {
      mx = ar[i];
    }
  }

  cout<<endl;
  cout << "max element in the list is: " << mx << endl;

  cout<<endl;
  cout << "NOTE: This ccode will not satisfy all the constraints"<<endl;
  cout<< "it will run (m*n) which is 10^5*10^7=10^12";

      return 0;
}
