#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,i,ans;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ans=((i*i)*((i*i)-1)/2)-(4*(i-1)*(i-2));
        cout<<ans<<endl;
    }
    return 0;
}
