#include <bits/stdc++.h>
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
    io
    double a,b,c,d,k,ans;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>k;
        ans = ceil(a/c) + ceil(b/d);
        if(ans>k)cout<<-1<<endl;
        else
        {
            cout<<fixed<<setprecision(0)<<ceil(a/c)<<" "<<ceil(b/d)<<endl;
        }
 
    }
}
