#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,x,sum=0;
  cin>>n;

  int a[n+1]={0},b[n+1]={0},c[n]={0};

  for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n;i++)cin>>b[i];
  for(int i=0;i<n-1;i++)cin>>c[i];

  int tmp=-2;

  for(int i=0;i<n;i++)
  {
    sum+=b[a[i]-1];

    if(tmp+1==a[i]){sum+=c[a[i]-2];}

    tmp=a[i];
  }

  cout<<sum;

}
