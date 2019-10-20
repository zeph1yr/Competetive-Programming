#include <bits/stdc++.h>
 
using namespace std;
int main()
{
   #define int long long
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }
 
    sort(vec.begin(),vec.end());
 
    int ox=0,oy=0;
 
 
    for(int i=0;i<n;i++)
    {
        if(i==n-i-1 || i>=n/2){if(n%2!=0)ox+=vec[i]; break;}
        ox+=vec[n-i-1];
        oy+=vec[i];
    }
 
    cout<<ox*ox + oy*oy<<endl;
 
}
