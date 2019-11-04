#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   #define int long long
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int amt=0;
 
        int temp = s/n;
 
        if(temp>a)
            {
                if(s<=a*n + b)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        else
        {
        if(s - temp*n <= b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        } 
        }
 
    }
 
