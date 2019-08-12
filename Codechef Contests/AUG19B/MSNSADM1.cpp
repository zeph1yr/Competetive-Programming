#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a1[n+5]={0};
        int a2[n+5]={0};

        for(int i=0;i<n;i++)
        {
            cin>>a1[i];
            a1[i]=a1[i]*20;
        }

        for(int i=0;i<n;i++)
        {
            cin>>x;
            x=x*10;
            a1[i]=a1[i]-x;
        }

        sort(a1,a1+n,greater<int>());
        if(a1[0]<0){cout<<0<<endl;continue;}
        else cout<<a1[0]<<endl;
    }
}
