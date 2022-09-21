#include <bits/stdc++.h>

/*
  Program to find the sub sequences of a give string.
  the number of values in a power set is 2^n (where n is the number of elements
  in the array/vector)
*/

using namespace std;

void printString(vector<string> &arr) {
  for (auto i : arr) {
    cout << i << endl;
  }
}

void solve(string arr, int index, string output, vector<string> &result) {

  if (index >= arr.size()) {

    if (output.size() == 0) {
      return;
    }

    result.push_back(output);
    output.pop_back();
    return;
  }

  solve(arr, index + 1, output, result);

  char x = arr[index];
  output.push_back(x);
  solve(arr, index + 1, output, result);
}

vector<string> subSequences(string arr) {
  vector<string> result;

  if (arr.size() == 0) {

    result.push_back(arr);
    return result;
  }

  int index = 0;
  string output = "";

  solve(arr, index, output, result);

  return result;
}

int main(int argc, char *argv[]) {
  string arr = "abc";

  vector<string> result = subSequences(arr);
  printString(result);

  return 0;
}
