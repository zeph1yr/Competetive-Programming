#include <iostream>
 
using namespace std;
 
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
    int t;
    long long int cn=0,cp=0,minm=0,flag,p;
    cin>>t;
    long long int arr[t];
 
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
        if(arr[i]>=0)arr[i]=-arr[i]-1;
        minm=min(minm,arr[i]);
        if(minm==arr[i])p=i;
    }
 
    if(t%2!=0)arr[p]=-arr[p]-1;
 
    for(int i=0;i<t;i++)
            {
                cout<<arr[i]<<" ";
            }
 
}
