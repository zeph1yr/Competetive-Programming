#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll fib(ll f[], ll n)
{
    f[0] = 0;
    f[1] = 1;

    for (ll i = 2; i <= n; i++)
    {
        f[i] = (f[i - 1] + f[i - 2]) % 10;
    }

    return f[n];
}


ll findLastDigit(ll n)
{
    ll f[60] = {0}; fib(f, 60);if(n<60)return f[n]; else return f[n % 60];
}

int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,temp=1,ans=1,fin;
        cin>>n;

        while(1)
        {
        ans=ans*2;
        if(ans>n) break;
        temp=ans;
        }

        fin=findLastDigit(temp-1);
        cout << fin<< endl;
    }
}
