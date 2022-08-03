#include <bits/stdc++.h>

using namespace std;
int N = 1e2 + 10;

int main() {

  int t;
  cin >> t;
  while (t--) {
    int a[N];
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }

    while (q--) {
      int l, r;
      int gc = 0;
      cin >> l >> r;

      for (int i = 1; i <= l - 1; i++) {
        gc = __gcd(gc, a[i]);
      }

      for (int i = r+1; i <= n; i++) {
        gc = __gcd(gc, a[i]);
      }

      cout << "GCD of the list is == " << gc << endl;
    }
  }

  return 0;
}
