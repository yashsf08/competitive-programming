#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int a[N];
int pf[N];

// void printArray(int []){
//     for (int i = 0; i < ; i++) {
//         
//     }
//
// }

int main() {

  int x, q;

  cout << "Taking input values from the user: " << endl;
  cin >> x;
  for (int i = 1; i <= x; i++) {
    cin >> a[i];
    pf[i] = pf[i-1] + a[i];
  }
  // for (int i = 0; i <= x; i++) {
  //   cout<<pf[i]<<endl;
  // }

  cin >> q;
  while (q--) {
    int l, r;
    long long sum = 0;
    cin >> l >> r;
    // for (int i = l; i <= r; i++) {
    //
    //   sum += a[i - 1];
    // }

    cout << "Sum for the range " << l << " to " << r << " is: ";
    cout << pf[r] - pf[l-1] << endl;
  }
  return 0;
}
