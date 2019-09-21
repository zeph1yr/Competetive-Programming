#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>>vec;
    int x,sum=0;
 
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(make_pair(x,i+1));
    }
 
    sort(vec.begin(), vec.end());
 
    int cnt=0;
 
    for(int i=n-1;i>=0;i--)
    {
        sum+=cnt*vec[i].first+1;
        cnt++;
    }
 
    cout<<sum<<endl;
    for(int i=n-1;i>=0;i--)cout<<vec[i].second<<" ";
 
 
}
