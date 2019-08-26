#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,ltsum=0, rtsum=0, x, sum=0;
       char temp;
        cin>>n;
        vector <int> v1,v2;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            cin>>temp;
            x=temp-'0';
            ltsum+=x;
            sum+=x;
            if(j== n/2 -1)v1.push_back(sum);
        }

        sum=0;

        for(int j=n/2;j<n;j++)
        {
            cin>>temp;
            x=temp-'0';
            rtsum+=x;
            sum+=x;
            if(j==n-1)v2.push_back(sum);
        }

        sum=0;
    }

    int ans=INT_MAX;

    for(int i=0;i<n;i++)
    {
        ans=min(ans,abs(ltsum-v1[i]+v2[i] - (rtsum-v2[i]+v1[i])));
    }

    cout<<min(ans,abs(ltsum-rtsum))<<endl;

    }
}
