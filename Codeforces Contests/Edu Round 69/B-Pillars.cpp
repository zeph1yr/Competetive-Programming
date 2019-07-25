#include <bits/stdc++.h>
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
int main()
{
    int n,maxm=0,posn;
    cin>>n;
    int arr[n+1]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxm){posn=i;maxm=arr[i];}
    }
 
    for(int i=0;i<posn;i++)
    {
        if(arr[i]>arr[i+1]){cout<<"NO";return 0;}
    }
    for(int i=posn+1;i<n;i++)
    {
        if(arr[i]<arr[i+1]){cout<<"NO";return 0;}
    }
 
    cout<<"YES";
 
}
