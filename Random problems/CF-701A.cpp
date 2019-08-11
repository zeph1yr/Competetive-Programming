#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<pair <int,int>> mp;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        mp.push_back(make_pair(x,i));
    }

    sort(mp.begin(),mp.end());
    int temp=n;

    for(int i=0;i<n;i++)
    {
       n--;
        cout<<mp[i].second<<" "<<mp[n].second<<endl;
    }

}
