#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long int t;
    cin>>t;
    while(t--)
    {
       int flag=1;
        string s;
        cin>>s;
        int n=s.size();
        long long int right=n+20;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!='.')
            {
                if(i+(s[i]-'0')<right)right=i-(s[i]-'0');
                else {flag=0;break;}
                if(right<0)right=0;
                if(right>n)right=n;
            }
        }
        if(flag==0)cout<<"unsafe"<<endl;
        else cout<<"safe"<<endl;
    }

}

