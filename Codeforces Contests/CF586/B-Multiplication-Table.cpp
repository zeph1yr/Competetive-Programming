#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    #define int unsigned long long
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int arr[n][n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
 
if(n>3)
{
    int temp=n/2;
 
    for(int i=0;i<=temp;i++)
    {
        arr[i][i]=(arr[i][i+1]*arr[i][i+2])/arr[i+1][i+2];
    }
 
    for(int i=n-temp;i<n;i++)
    {
        arr[i][i]=(arr[i][i-1]*arr[i][i-2])/arr[i-1][i-2];
    }
 
    for(int i=0;i<n;i++)cout<<sqrt(arr[i][i])<<" ";
 
}
 
else
{
    arr[0][0]=(arr[0][1]*arr[0][2])/arr[1][2];
    arr[1][1] = (arr[0][1] * arr[1][2])/arr[0][2];
    arr[2][2]=(arr[2][1]*arr[2][0])/arr[1][0];
 
    for(int i=0;i<n;i++)cout<<sqrt(arr[i][i])<<" ";
}
 
}
