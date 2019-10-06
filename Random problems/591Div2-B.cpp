#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  #define int long long
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        int flag=0;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i]==t[j]){flag=1;break;}
            }
        }
 
        if(flag){cout<<"YES"<<endl;flag=0;}
        else cout<<"NO"<<endl;
 
 
}}
