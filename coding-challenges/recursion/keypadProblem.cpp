#include <bits/stdc++.h>

/*
  Program to print possible texts when pressed given numbers keypad in a mobile.
*/

using namespace std;

void printArrayString(vector<string> &arr) {
  for (auto i : arr) {
    cout << i << endl;
  }
}

void solve(string digits, string output, int index, vector<string> &mapping,
           vector<string> &result) {

  if (index >= digits.size()) {
    result.push_back(output);
    return;
  }

  int num = digits[index] - '0';
  string temp = mapping[num];

  for (int i = 0; i < temp.size(); i++) {
    output.push_back(temp[i]);
    solve(digits, output, index + 1, mapping, result);
    output.pop_back();
  }
}

vector<string> letterCombination(string digits) {

  vector<string> result;
  if (digits.size() == 0) {
    return result;
  }

  string output;
  int index = 0;

  vector<string> mapping = {"",    "",    "abc", "def",  "ghi",
                            "jkl", "mno", "pqr", "stuv", "wxyz"};

  solve(digits, output, index, mapping, result);

  return result;
}

int main(int argc, char *argv[]) {
  string test = "25";
  // string test = "";
  vector<string> result = letterCombination(test);

  printArrayString(result);
  return 0;
}
