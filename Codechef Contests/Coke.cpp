#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--)
    {
    int ans=-1,p=1000000001;
    int n,m,k,l,r,t,pi;
    cin>>n>>m>>k>>l>>r;
    while(n--)
    {
        cin>>t>>pi;
        for(int i=0;i<m;i++)
        {
            if(t>k+1)t=t-1;
            else if(t<k-1)t=t+1;
            else if(t==k-1||t==k+1||t==k)t=k;
        }

        if(t>=l && t<=r)
        {
            if(pi<p){ans=pi;p=pi;}
        }


    }
cout<<ans<<endl;

}
}
