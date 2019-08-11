#include <iostream>

using namespace std;

int main()
{
    int n,m,x,y;
    cin>>n>>m;
    int ax[n+1]={0},ay[n+1]={0};
    long long int nx=n;
    long long int ny=n;
    long long ans=0;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        if(ax[x]==0){ax[x]++;nx--;}
        if(ay[y]==0){ay[y]++;ny--;}
        ans=nx*ny;
        cout<<ans<<" ";
    }


}
