#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n,a,x,b,c=0,t1,t2,temp,flag=0;
        cin>>x>>n;

        int lim=0;

        int arr[x+1]={0};
        int maxm=0;

        for(int i=0;i<n;i++)
        {
            maxm=i/x;
            cin>>a;
            if(arr[a]>maxm){flag=1;}
            else arr[a]++;

        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        }

    }

