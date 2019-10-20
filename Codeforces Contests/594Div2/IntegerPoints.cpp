#include <bits/stdc++.h>
 
using namespace std;
int main()
{
   #define int long long
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
    int n,m,x;
    cin>>n;
 
    int ev1=0,ov1=0,ev2=0,ov2=0;
 
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==0)ev1++;
        else ov1++;
    }
 
    cin>>m;
 
    for(int i=0;i<m;i++)
    {
        cin>>x;
        if(x%2==0)ev2++;
        else ov2++;
    }
 
    cout<<ev1*ev2 + ov2*ov1<<endl;
 
    }
}
