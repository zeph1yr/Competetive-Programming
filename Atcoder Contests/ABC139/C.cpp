#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,x,cnt=0;
  cin>>n;
  int arr[n]={0};
  for(int i=0;i<n;i++)cin>>arr[i];
int ans=0;
  for(int i=0;i<n-1;i++)
  {
      if(arr[i]>=arr[i+1])cnt++;
      else cnt=0;
      if(cnt>ans)ans=cnt;
  }
  cout<<ans;
}
