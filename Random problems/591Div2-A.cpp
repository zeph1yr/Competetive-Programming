#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  #define int long long
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==2)cout<<2<<endl;
        else if(n%2!=0)cout<<1<<endl;
        else
        {
            cout<<0<<endl;
        }
    }
 
}
