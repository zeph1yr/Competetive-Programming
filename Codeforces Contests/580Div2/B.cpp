#include <iostream>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long int n,x,l=0,o=0,ans=0;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<0)
        {
            ans+=-(x+1);
            l++;
        }
 
        if(x>0)
        {
            ans+=x-1;
        }
 
        if(x==0)o++;
    }
 
    if(l%2==0)cout<<ans+o;
    else
    {
        if(o>=1)cout<<ans+o;
        else cout<<ans+2;
    }
}
