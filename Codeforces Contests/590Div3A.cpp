#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
    int b,c;
    vector<int>vec;
    int n;
    cin>>n;
    double sum=0,x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    long long ans;
   double temp=sum/n;
  if(ceil(temp)== temp) ans =int(temp) ;
   else ans= int(temp)+1;
 
    cout<<ans<<endl;
 
    }
 
 
}
