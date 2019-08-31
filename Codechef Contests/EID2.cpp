#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int x,flag=0;
    vector<pair<int,int>> vec;
    int a1[4],a2[4];

    for(int i=0;i<3;i++)
    {
        cin>>a1[i];
    }

    for(int i=0;i<3;i++)
    {
        cin>>a2[i];
    }

    for (int i=0; i<3; i++)
        vec.push_back( make_pair(a1[i],a2[i]) );

    sort(vec.begin(),vec.end());

    for(int i=0;i<2;i++)
    {

        if(vec[i].first==vec[i+1].first)
        {
            if(vec[i].second==vec[i+1].second)continue;
            else flag=1;
        }

        if(vec[i].second>vec[i+1].second)
        {
            flag=1;
        }
        else if(vec[i].second==vec[i+1].second)
        {
            if(vec[i].first!=vec[i+1].first)flag=1;
        }
    }

    if(flag)cout<<"NOT FAIR"<<endl;
    else cout<<"FAIR"<<endl;

    }

}
