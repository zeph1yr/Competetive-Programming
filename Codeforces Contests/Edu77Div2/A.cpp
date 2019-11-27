#include <bits/stdc++.h>
using namespace std;
 
long long power(long long x, long long y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}
 
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
    int a,b,temp,x;
    int t;cin>>t;while(t--)
    {
        cin>>a>>b;
        if(a>b){cout<<b<<endl;continue;}
        else
        {
            temp = b%a;
            x=b/a;
            x=b/a;
           ll ans =   temp*power(x+1,2) + (a-temp)*power(x,2);
        cout<<ans<<endl;
        }
    }
}
