#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
 
   if(n==1)
    {
        if(k>=1){cout<<0;return 0;}
        else {cout<<s;return 0;}
   }
 
   if(s[0]!='1'&&k>0){k--;s[0]='1';}
 
   for(int i=1;i<n;i++)
   {
       if(k<=0)break;
       if(s[i]!='0'){s[i]='0';k--;}
   }
 
   cout<<s;
 
 
}
