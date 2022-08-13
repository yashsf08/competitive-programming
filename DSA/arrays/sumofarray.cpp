#include <bits/stdc++.h>

/*
  Function to return the sum of all the elements in the array.
*/

using namespace std;

int sumofarray(int arr[], int n) {
  int i = 0;
  int result = 0;

  while (i < n) {
    result += arr[i];
    i++;
  }
  return result;
}

int main (int argc, char *argv[])
{
  int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  cout<<"Sum of all the elements in the array is: "<<sumofarray(arr, 10)<<endl;
  return 0;
}
