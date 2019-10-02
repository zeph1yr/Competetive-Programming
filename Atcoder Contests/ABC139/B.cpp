#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,ans=1;
  cin>>n>>k;
  int cnt=0;
  while(1)
  {
   if(ans>=k)break;
   ans--;
   ans+=n;
    cnt++;
  }

  cout<<cnt<<endl;
}
