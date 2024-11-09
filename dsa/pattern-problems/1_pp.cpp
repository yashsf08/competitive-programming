#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void pattern_1(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern_2(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern_3(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    cout << endl;
  }
}

void pattern_4(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i;
    }
    cout << endl;
  }
}

void pattern_5(int n) {
  for (int row = 1; row <= n; row++) {
    for (int j = 0; j < n - row + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern_6(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      cout << "-";
    }

    for (int k = 0; k < (2 * i) + 1; k++) {
      cout << "*";
    }

    for (int j = 0; j < n - i - 1; j++) {
      cout << "-";
    }

    cout << endl;
  }
}

void pattern_7(int n) {

  for (int i = 0; i < n; i++) {

    // black Space
    for (int j = 0; j < i; j++) {
      cout << "-";
    }

    // for reverse pyramid
    for (int k = 0; k < ((n - i) * 2 - 1); k++) {
      cout << "*";
    }

    // blank space
    for (int l = 0; l < i; l++) {
      cout << "-";
    }
    cout << endl;
  }
}

void pattern_8(int n) {
  // combination of pattern 6 and 7
  pattern_6(n);
  pattern_7(n);
}

void pattern_9(int n) {

  // combination of pattern 2 and 5
  /* pattern_2(n); */
  /* pattern_5(n - 1); */

  // Efficient Implementation
}

void pattern_10(int n) {

  bool flag;

  for (int i = 0; i < n; i++) {
    // checking weather the loop is even or odd.
    if (i % 2 == 0) {
      flag = true;
    } else {
      flag = false;
    }

    // loop through while flipping flag.
    for (int j = 0; j <= i; j++) {
      cout << flag;
      flag = !flag;
    }
    cout << endl;
  }

  return;
}

void pattern_11(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << j + 1;
    }

    for (int j = 0; j < (n - i - 1) * 2; j++) {
      cout << " ";
    }

    for (int j = i + 1; j > 0; j--) {
      cout << j;
    }
    cout << endl;
  }
  return;
}

void pattern_12(int n) {
  int counter = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      ++counter;
      cout << counter << "\t";
    }
    cout << endl;
  }
}

void pattern_13(int n) {

  char base_char = 'A';

  for (int i = 0; i < n; i++) {
    for (char j = 'A'; j <= 'A' + i; j++) {
      cout << j;
    }
    cout << endl;
  }

  return;
}

void pattern_14(int n) {

  for (int i = 0; i < n; i++) {
    for (char j = 'A'; j < 'A' + (n - i); j++) {
      cout << j;
    }
    cout << endl;
  }

  return;
}

void pattern_15(int n) {

  for(int i = 0; i < n; i++) {
    

}



void pattern_22(int n) {

  int min_val = -1;
  int bot = -1;
  int top = -1;
  int right = -1;
  int left = -1;

  for (int i = 0; i < 2 * n - 1; i++) {
    for (int j = 0; j < 2 * n - 1; j++) {

      top = i;
      left = j;
      bot = 2 * n - 1 - 1 - top;
      right = 2 * n - 1 - 1 - left;
      min_val = min(min(left, right), min(top, bot));

      cout << n-min_val;
    }
    cout << endl;
  }
}

int main(int argc, char *argv[]) {
  int n;

  cin >> n;

  pattern_22(n);

  cout << endl;

  pattern_14(n);

  cout << endl;

  pattern_13(n);

  cout << endl;

  pattern_12(n);

  cout << endl;

  pattern_11(n);

  cout << endl;

  pattern_10(n);

  cout << endl;

  /* pattern_9(n); */ // TODO

  cout << endl;

  pattern_8(n);

  cout << endl;

  pattern_7(n);

  cout << endl;

  pattern_6(n);

  cout << endl;

  pattern_5(n);

  cout << endl;

  pattern_4(n);

  cout << endl;

  pattern_3(n);

  cout << endl;

  pattern_2(n);

  cout << endl;

  pattern_1(n);

  cout << endl;

  return 0;
}
