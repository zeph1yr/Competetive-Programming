#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll x,y,a,b,c,temp,flag=0,sum=0,ans=0,cnt=0,prod=1,n;
        cin>>a>>b;
        sum=a+b;

        int arr[]={6,2,5,5,4,5,6,3,7,6};

        while(sum>0)
        {
            temp=sum%10;
            ans+=arr[temp];
            sum=sum/10;
        }
        cout<<ans<<'\n';

    }
}
