#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,ans=0;
  cin>>n;
  vector<int>vec;
  int x;
  for(int i=0;i<n;i++){cin>>x;vec.push_back(x);}

  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      ans+= vec[i]*vec[j];
    }
  }

  cout<<ans;

}
