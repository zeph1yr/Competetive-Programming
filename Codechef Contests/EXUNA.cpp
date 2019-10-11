#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        int ans=v[0];

        for(int i=1;i<n;i++)
        {
           ans%=v[i];
        }

        cout<<ans<<endl;
    }
}
