#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;
int arr[N][N];
int pf[N][N];

int main() {
  int n;

  // taking cordinates from user.
  cin >> n;

  // taking N^2 roatations to fill the array and calculate prefix sum
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> arr[i][j];
      cout << arr[i][j] << " ";
      pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
    }
    cout << endl;
  }

  cout << endl;

  // printing the 2darray
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << pf[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;
  int q;
  cin >> q;
  while (q--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "Sum of the Matrix is : "
         << (pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1]) << endl;
  }

  return 0;
}
