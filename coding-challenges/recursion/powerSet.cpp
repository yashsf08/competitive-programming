#include <bits/stdc++.h>

using namespace std;

void printArray(vector<vector<int>> &arr) {
  for (auto i : arr) {
    for (auto j : i) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void solve(vector<int> arr, int index, vector<int> output,
           vector<vector<int>> &result) {

  if (index >= arr.size()) {
    result.push_back(output);
    output.pop_back();
    return;
  }

  solve(arr, index + 1, output, result);

  int element = arr[index];
  output.push_back(element);
  solve(arr, index + 1, output, result);
}

vector<vector<int>> powerSet(vector<int> &arr) {
  vector<vector<int>> result;

  if (arr.size() == 0) {
    result.push_back(arr);
    return result;
  }

  int index = 0;
  vector<int> output;

  solve(arr, index, output, result);

  return result;
}

int main(int argc, char *argv[]) {
  vector<int> test = {1, 2, 3};
  vector<vector<int>> result = powerSet(test);
  sort(result.begin(), result.end());
  printArray(result);

  return 0;
}
