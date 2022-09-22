#include <bits/stdc++.h>

/*
  Program to find permutation of a given String.
*/

using namespace std;

void printArrayString(vector<string> &arr) {
  for (auto i : arr)
    cout << i << endl;
}

void solve(string str, string output, int index, vector<string> &result) {

  if (index >= str.size()) {
    result.push_back(str);
    return;
  }

  for (int i = index; i < str.size(); i++) {
    swap(str[index], str[i]);
    // output.push_back(str[index]);
    solve(str, output, index+1, result);
    // output.pop_back();
    swap(str[index], str[i]);
  }
}

vector<string> permutationOfString(string str) {

  vector<string> result;

  if (str.size() == 0) {
    return result;
  }

  int index = 0;
  string output;

  solve(str, output, index, result);
  return result;
}

int main(int argc, char *argv[]) {
  string test = "abc";
  vector<string> result = permutationOfString(test);
  printArrayString(result);
  return 0;
}
