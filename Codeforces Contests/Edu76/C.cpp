    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        #define int long long
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int t;cin>>t;
        while(t--)
        {
        int minm=INT_MAX;
        int n,x;
        vector<pair<int,int>>vec;
        cin>>n;
        for(int i=0;i<n;i++)
        {
           cin>>x;
           vec.push_back(make_pair(x,i));
        }
     
        sort(vec.begin(),vec.end());
     
        for(int i=0;i<n-1;i++)
        {
            if(vec[i].first == vec[i+1].first)
            {
                minm=min(minm,vec[i+1].second - vec[i].second);
            }
        }
     
        if(minm==INT_MAX)cout<<-1<<endl;
       else  cout<<minm+1<<endl;
     
        }
     
    }
