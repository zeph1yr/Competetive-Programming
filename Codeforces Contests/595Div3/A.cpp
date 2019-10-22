#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        vector<int>vec;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
 
        int cnt=0;
 
       for(int i=0;i<n-1;i++)
       {
           if(cnt==0)if(vec[i+1]-vec[i]<=1)cnt++;
 
       }
       if(vec[n-1]-vec[n-2])cnt++;
 
       cout<<cnt<<endl;
 
    }
}
