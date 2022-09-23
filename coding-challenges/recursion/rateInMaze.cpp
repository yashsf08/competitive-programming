#include <bits/stdc++.h>

using namespace std;

void printStrings(vector<string> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << endl;
  }
}

void printVector(vector<vector<int>> &arr) {
  for (auto i : arr) {
    for (auto j : i) {
      cout << j << " ";
    }
    cout << endl;
  }
}

bool isSafe(vector<vector<int>> &arr, vector<vector<int>> &visited, int n,
            int x, int y) {

  if ((x >= 0 && x < n) && (y >= 0 && y < n) && arr[x][y] == 1 &&
      visited[x][y] == 0) {
    return true;
  }

  return false;
}

void solve(vector<vector<int>> &arr, vector<vector<int>> &visited, int n, int x,
           int y, string output, vector<string> &result) {

  if (x == n - 1 && y == n - 1) {
    result.push_back(output);
    return;
  }

  visited[x][y] = 1;

  int newx;
  int newy;
  bool temp;

  // left
  newx = x;
  newy = y - 1;
  temp = isSafe(arr, visited, n, newx, newy);
  if (temp) {
    // cout << "inside L" << endl;
    output.push_back('L');
    solve(arr, visited, n, newx, newy, output, result);
    output.pop_back();
  }

  // down
  newx = x + 1;
  newy = y;
  temp = isSafe(arr, visited, n, newx, newy);
  if (temp) {
    // cout << "inside D" << endl;
    output.push_back('D');
    solve(arr, visited, n, newx, newy, output, result);
    output.pop_back();
  }

  // right
  newx = x;
  newy = y + 1;
  temp = isSafe(arr, visited, n, newx, newy);
  if (temp) {
    // cout << "inside R" << endl;
    output.push_back('R');
    solve(arr, visited, n, newx, newy, output, result);
    output.pop_back();
  }

  // up
  newx = x - 1;
  newy = y;
  temp = isSafe(arr, visited, n, newx, newy);
  if (temp) {
    // cout << "inside U" << endl;
    output.push_back('U');
    solve(arr, visited, n, newx, newy, output, result);
    output.pop_back();
  }

  visited[x][y] = 0;

  return;
}

vector<string> findPaths(vector<vector<int>> &arr, int n) {

  vector<string> result;

  if (arr[0][0] == 0) {
    return result;
  }

  vector<vector<int>> visited = arr;

  /* for (auto i : visited) {
    for (auto j : i) {
      j = 0;
    }
  } */

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      visited[i][j] = 0;
    }
  }

  // printVector(visited);
  // printVector(arr);

  string output;
  int x = 0;
  int y = 0;

  solve(arr, visited, n, x, y, output, result);

  return result;
}

int main(int argc, char *argv[]) {

  vector<vector<int>> arr = {
      {1, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 1}};

  int size = arr.size();

  vector<string> results = findPaths(arr, size);
  printStrings(results);

  return 0;
}
