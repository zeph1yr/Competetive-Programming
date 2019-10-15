#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int n,m,k,x,cnt=0,pos1=0,pos2=0;
    cin>>n>>m>>k;
    int p1[n+5]={0};
    int a1[m+5]={0};
    for(int i=0;i<n;i++)
    {
        cin>>p1[i];
    }
 
    for(int i=0;i<m;i++)
    {
        cin>>a1[i];
    }
 
    sort(p1,p1+n,greater<int>());
    sort(a1,a1+m,greater<int>());
 
    while(pos1!=n && pos2!=m)
    {
        if(p1[pos1]<=a1[pos2]+k && p1[pos1]>=a1[pos2]-k)
        {
            pos1++;pos2++;
            cnt++;
        }
        else
        {
            if(p1[pos1]>a1[pos2])pos1++;
            else pos2++;
        }
    }
 
    cout<<cnt<<endl;
    }
