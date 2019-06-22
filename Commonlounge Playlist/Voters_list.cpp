#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);
    int t1,t2,t3,x,cnt=0;
    int arr[1000000]={0};
    cin>>t1>>t2>>t3;
    while(t1--)
    {
        cin>>x;
        arr[x]++;
    }

    while(t2--)
    {
        cin>>x;
        arr[x]++;
    }

    while(t3--)
    {
        cin>>x;
        arr[x]++;
    }

    for(int i=0;i<1000000;i++)
    {
        if(arr[i]>=2)cnt++;
    }
    cout<<cnt<<endl;

    for(int i=0;i<1000000;i++)
    {
        if(arr[i]>=2)cout<<i<<endl;
    }
}
