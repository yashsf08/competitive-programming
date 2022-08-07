#include <bits/stdc++.h>

using namespace std;

int main (int argc, char *argv[])
{
  int n;
  cin >> n;

  int i = 1;
  while (i<=n)
  {
      int space = 1;
      while(space < i) {
        cout<<"  ";
        space++;
      }

      int j = i ;
      while(j <= n) {
        cout<<j<<" ";
        j++;
      }

      cout<<endl;
      i++;
  } 
  




  
  return 0;
}
