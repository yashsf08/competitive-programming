#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[])
{
  int n;
  cin>>n;

  int i;
  i = 1;
  while (i<=n)
  {
    int space = n - i;
      while (space)
      {
        cout<<"  ";
        space--;
      }
    int j = 1;
    while (j<=i) {
        cout<<i<<" ";
        j++;
      }
      cout<<endl;
      i++;
  }
  return 0;
}
