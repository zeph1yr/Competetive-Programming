#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<pair<int,int>> vi;
    int n,a,b,c,sum=0,ans=-1,temp,value;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        vi.push_back(make_pair(b+c,a));
    }

    sort(vi.begin(),vi.end(),greater<>());

    for(int i=0;i<n;i++)
    {
        value=vi[i].first+vi[i].second+sum;
        sum+=vi[i].second;
        ans=max(ans,value);
    }

    cout<<ans;
}
