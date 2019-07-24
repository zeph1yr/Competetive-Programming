#include <iostream>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    long long int a,b,c,ans;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        ans=a+b+c;
        if(ans%2!=0)ans--;
        cout<<ans/2<<endl;
 
    }
 
 
}
