#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,x,cnt=0,temp;
    cin>>n>>x;
    int a[n+1]={0};
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    
    int i=0,j=n-1;
 
  while(i<=j)
    {
        if(a[i]+a[j]<=x){i++;j--;}
        else j--;
        cnt++;
    }
    cout<<cnt;
}
