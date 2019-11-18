#include <bits/stdc++.h>

using namespace std;

int main()
{
#define int long long

    int t;cin>>t;while(t--)
    {
        int n,k,x,sum=0;
        cin>>n>>k;
        int flag=0,ans=0;

        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
            sum-=k;
            if(sum<0)if(!flag){flag=1;ans=i+1;}
        }
        if(flag)cout<<"NO "<<ans<<endl;
        else cout<<"YES"<<endl;
    }
}
