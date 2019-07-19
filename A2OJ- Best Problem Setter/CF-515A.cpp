#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x,y,a,temp;
    cin>>x>>y>>a;
    temp=abs(x)+abs(y);
    if(temp>a)cout<<"No";
    else if((temp-a)%2==0)cout<<"Yes";
    else cout<<"No";
}
