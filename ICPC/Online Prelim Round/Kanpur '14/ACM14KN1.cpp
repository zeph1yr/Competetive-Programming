#include <bits/stdc++.h>
#define ll long long int
#define io ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    io;
    int t;cin>>t;while(t--)
    {
        bool flag = 0;
    ll a,b,x,y;
    cin>>a>>b;
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(y<=b && x>=a)flag=1;
        else if(x<=a && y>=b)flag=1;
        else if((x<b&&x>=a) && y>=b)flag=1;
    }

    if(flag)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
}
