#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[6]={0};
    for(int i=0;i<n;i++)
    {
        if(s[i]=='o')arr[0]++;
        else if(s[i]=='n')arr[1]++;
        else if(s[i]=='e')arr[2]++;
        else if(s[i]=='z')arr[3]++;
        else if(s[i]=='r')arr[4]++;
    }
 
    int c1=0,c0=0;
 
    int temp=min(min(arr[0],arr[1]),arr[2]);
    arr[0]=arr[0]-temp;
    arr[1]=arr[1]-temp;
    arr[2]=arr[2]-temp;
 
    c1=temp;
 
    temp=min(min(min(arr[0],arr[2]),arr[3]),arr[4]);
 
    c0=temp;
 
    for(int i=0;i<c1;i++)cout<<1<<" ";
    for(int i=0;i<c0;i++)cout<<0<<" ";
 
}
