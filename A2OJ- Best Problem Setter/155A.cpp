#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n--;
    int x;
    cin>>x;
    int cnt=0;
    
    int hi=x,lo=x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>hi){cnt++;hi=x;}
        if(x<lo){cnt++;lo=x;}
    }
    cout<<cnt;
}
