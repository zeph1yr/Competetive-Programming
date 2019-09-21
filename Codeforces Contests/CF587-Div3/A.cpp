#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i=i+2)
    {
        if(s[i]=='a')
            {
                if(s[i+1]=='a')
                {
                s[i]='b';
                cnt++;
                }
            }
 
            if(s[i]=='b')
            {
                if(s[i+1]=='b')
                {
                s[i]='a';
                cnt++;
                }
            }
 
    }
 
    cout<<cnt<<endl;
    cout<<s;
}
