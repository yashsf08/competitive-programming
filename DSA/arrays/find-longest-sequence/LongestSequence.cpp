#include <bits/stdc++.h>

using namespace std;

bool linearSearch(int n, vector<int> &arr, int key) {
  for (int i = 1; i < n; ++i) {
    if (arr[i] == key) {
      return true;
    }
  }
  return false;
}

int findLongestSequenceBF(int n, vector<int> &arr) {
  int maxLen = 0;

  for (int i = 0; i < n; i++) {
    int x = arr[i];
    int cnt = 1;

    while (linearSearch(n, arr, x + 1)) {
      cnt++;
      x++;
    }

    if (cnt > maxLen) {
      maxLen = cnt;
    }
  }

  return maxLen;
}

// performing sorting
int findLongestSequence_Better(int n, vector<int> &arr) {
  // TC: O(nlongn + n)
  // SC: O(1)

  // Handling Edge Case
  if (arr.size() == 0)
    return 0;

  if (arr.size() == 1)
    return 1;

  sort(arr.begin(), arr.end());
  int maxLen = 1;
  int cnt = 1;

  // looping through the whole array to find out maxLen
  for (int i = 0; i < n - 1; ++i) {
    if (arr[i] != arr[i + 1]) {
      if (arr[i] + 1 == arr[i + 1]) {
        cnt++;
      } else {
        cnt = 1;
      }
      maxLen = max(cnt, maxLen);
    }
  }

  return maxLen;
}

int findLongestSequence_optim(int n, vector<int> &arr) {
  // TC: O(n) or O(3n) -- O(n) for insert, O(n) for visit all element, O(n)
  // while for visiting each seqquence once. SC: O(1)

  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  int maxLen = 1;
  unordered_set<int> st;

  // inserting all element in set
  for (int i = 0; i < n; i++) {
    st.insert(arr[i]);
  }

  // Searching for
  for (int num : st) {
    if (st.find(num - 1) == st.end()) {
      int x = num;
      int cnt = 1;

      while (st.find(num + 1) != st.end()) {
        cnt++;
        x++;
      }

      maxLen = max(cnt, maxLen);
    }
  }
  return maxLen;
}

void printArray(int n, vector<int> &arr) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return;
}

int main(int argc, char *argv[]) {
  int t = 1;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    cout << "The Longest Sequence of the Array found is: "
         /*<< findLongestSequenceBF(n, arr);*/
         /*<< findLongestSequence_Better(n, arr);*/
         << findLongestSequence_optim(n, arr);

    cout << endl;
  }

  return 0;
}
