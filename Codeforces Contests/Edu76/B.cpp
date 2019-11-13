    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        #define int long long
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int t;cin>>t;
        while(t--)
        {
        int a,b;
        cin>>a>>b;
     
        if(a==b)cout<<"YES"<<endl;
        else if(a<b)
        {
            int temp = a/2 * 3;
     
            if(temp==b)cout<<"YES"<<endl;
            else
            {
                if(temp%2!=0)temp--;
     
                if(temp<=a)cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
     
     
            }
        }
     
        else cout<<"YES"<<endl;
     
        }
     
    }
