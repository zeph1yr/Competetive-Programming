    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        #define int long long
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int t;cin>>t;
        while(t--)
        {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        if(a>b)swap(a,b);
        int temp = a-1 + n-b;
     
        if(x>temp)cout<<n-1<<endl;
        else
        {
     
         int tmp= n-b;
            if(x>n-b)
            {
            b=n;
     
            while(tmp--)
            {
                x--;
            }
            }
            else {b+=x;x=0;}
     
            if(x>0)
            {
                if(x>a-1){a=1;}
                else {a-=x;}
            }
     
            cout<<b-a<<endl;
        }
        }
     
    }
