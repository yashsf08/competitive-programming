#include <bits/stdc++.h>

using namespace std;

bool duplicate(vector<int> arr) {

  vector<int> ans;
  int i = 0;
  sort(arr.begin(), arr.end());
  while (i < arr.size()) {
    int count = 1;
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[i] == arr[j])
        count++;
    }
    ans.push_back(count);
    i = i + count;
  }

  for (int k = 0; k < ans.size(); k++) {
    if (ans[k] == ans[k + 1]) {
      return 0;
    }
  }

  return 1;
}

int main(int argc, char *argv[]) {
  // vector<int> arr = {1, 2, 2, 1, 3};
  vector<int> arr = {-3,0,1,-3,1,1,1,-3,10,0};
  cout << "Result is: " << duplicate(arr) << endl;
}
