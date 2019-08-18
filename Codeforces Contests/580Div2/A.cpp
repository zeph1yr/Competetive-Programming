#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n1,n2,temp=0;
    bool flag=0;
    cin>>n1;
    int a[n1+1]={0};
    for(int i=0;i<n1;i++)cin>>a[i];
 
    cin>>n2;
    int b[n2+1]={0};
    for(int i=0;i<n2;i++)cin>>b[i];
 
    sort(a,a+n1);
    sort(b,b+n2);
 
    for(int i=n1-1;i>=0;i--)
    {
        for(int j=n2-1;j>=0;j--)
        {
            temp=a[i]+b[j];
 
            for(int k=n1-1;k>=0&&a[k]>=temp;k--)if(a[k]==temp){flag=1;break;}
            for(int l=n2-1;l>=0&&b[l]>=temp;l--)if(b[l]==temp){flag=1;break;}
            if(flag){flag=0;continue;}
            else{cout<<a[i]<<" "<<b[j]; return 0;}
        }
    }
 
}
