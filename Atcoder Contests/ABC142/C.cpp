#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<pair<int,int>> vec;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        vec.push_back(make_pair(x,i));
    }

    sort(vec.begin(),vec.end());

    for(int i=0;i<n;i++)cout<<vec[i].second<<" ";
}
