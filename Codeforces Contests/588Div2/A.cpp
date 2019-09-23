#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int arr[4]={0};
    int sum=0,temp,flag=0;
    for(int i=0;i<4;i++){cin>>arr[i];sum+=arr[i];}
 
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            temp=arr[i]+arr[j];
            if(temp == sum-temp)flag=1;
        }
    }
 
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            for(int k=j+1;k<4;k++)
            {
                temp=arr[i]+arr[j]+arr[k];
            if(temp == sum-temp)flag=1;
            }
        }
    }
 
    if(flag)cout<<"YES";
    else cout<<"NO";
 
}
