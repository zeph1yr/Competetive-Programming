#include <bits/stdc++.h>
using namespace std;
int main()
{
  set<int>s;
  for(int i=1;i<=9;i++)
  {
    for(int j=1;j<=9;j++)
    {
      s.insert(i*j);
    }
  }
  int n;
  cin>>n;
  if (binary_search(s.begin(), s.end(), n))cout<<"Yes";
  else cout<<"No";
  
}
