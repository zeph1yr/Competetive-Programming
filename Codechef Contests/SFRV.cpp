#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int dp[n+1]={0},arr[n+1]={0};

        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }

        dp[0]=0;
        dp[1]=arr[1];

        for(int i=2;i<=n;i++)
        {
            dp[i]=max( dp[i-1]+arr[i]*i,dp[i-2]+arr[i]*(i-1) + arr[i-1]*i);
        }

        cout<<dp[n]<<endl;

    }
}
