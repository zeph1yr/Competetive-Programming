#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

int main()
{
    #define int long long
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int dp[n+1]={0};
    dp[0]=1;
    dp[1]=1;

    for(int i=2;i<=n;i++)
    {
        for(int j=i-1;j>=i-6 && j>=0;j--)
            {
                dp[i]+=dp[j]%mod;
            }
    }

   cout<<dp[n]%mod;

}
