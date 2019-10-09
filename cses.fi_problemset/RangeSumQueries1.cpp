#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   #define int long long int
    int n,q,sum=0,x;
    vector<int>vec,v;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        sum+=x;
        vec.push_back(sum);
    }
    int a,b;
 
    for(int i=0;i<q;i++)
    {
        cin>>a>>b;
        if(a==1&&b==n)cout<<sum<<endl;
        else if(a==b)cout<<v[a-1]<<endl;
        else if(a==1&&b!=n)cout<<vec[b-1]<<endl;
        else if(b==n&&a!=1)cout<<sum-vec[a-2]<<endl;
        else cout<<vec[b-1] - vec[a-2]<<endl;
 
    }
}
