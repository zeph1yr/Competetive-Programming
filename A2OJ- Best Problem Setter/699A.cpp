    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>vec;
     
        int flag=0,ans=INT_MAX,x;
     
     
        for(int i=0;i<n;i++){cin>>x;vec.push_back(x);}
     
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1] && s[i]=='L'){ans=min(ans,(vec[i]-vec[i-1])/2);}
        }
        if(ans==INT_MAX)ans=-1;
        cout<<ans<<endl;
    }
