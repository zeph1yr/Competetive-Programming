#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    int a,b,temp,x,ans;
    int t;cin>>t;while(t--)
    {
        cin>>a>>b;
        if(a>b)swap(a,b);
        if(a==1 && b== 2)cout<<"YES"<<endl;
        else if(b - a*2 > 0)cout<<"NO"<<endl;
        else
        {
            temp = b-a;
            ans = b*2 - a;
 
            if(ans%3==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
