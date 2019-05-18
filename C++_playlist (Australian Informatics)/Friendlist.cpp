
#include <bits/stdc++.h>

using namespace std;

int main()
{
   
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    //Friendlist

    int t,x,y,temp,maxm,asize,cnt=0;
    int arr[1000000]={0};

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        arr[x]+=1;
        arr[y]+=1;
    }

    for(int i=0;i<1000000;i++)
    {
        if(arr[i]>maxm)
        {
            maxm=arr[i];
        }
    }

    for(int i=0;i<1000000;i++)
    {
        if(arr[i]==maxm)cout<<i<<endl;
    }



}
