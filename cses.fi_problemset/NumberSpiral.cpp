#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    long long int x,y,temp,sum;

int t;
cin>>t;
for(int i=0;i<t;i++)
{
    sum=1;
    cin>>x>>y;
    temp=max(x,y);
    sum = (temp * (temp-1))+1;

    if(x!=temp)
    {
        if(temp%2==0){cout<<sum - (y-x)<<endl;continue;}
        else {cout<<sum+(y-x)<<endl;continue;}
    }

    else
    {
        if(temp%2==0){cout<<sum+(x-y)<<endl;continue;}
        else {cout<<sum-(x-y)<<endl;continue;}
    }

}}
