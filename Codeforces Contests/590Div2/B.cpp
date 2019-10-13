#include <bits/stdc++.h>
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
    io
    int t,n,flag;
    cin>>t;
    while(t--)
    {
       flag=0;
       cin>>n;
       string s;cin>>s;
 
       int var1=0,var2=0,var;
 
       for(int i=0;i<n;i++)
       {
           if(s[i]=='1'){var1=i;flag=1;break;}
       }
 
       for(int j=n-1;j>=0;j--)
       {
           if(s[j]=='1'){var2 = n-j-1;flag=1;break;}
       }
 
 
        var=  n- min(var1,var2) ;
 
 
        if(flag)
        {
            if(var==0){cout<<n*2<<endl;continue;}
            else {cout<<var*2<<endl;continue;}
        }
 
        else
        {
            cout<<n<<endl;continue;
        }
 
 
    }
}
