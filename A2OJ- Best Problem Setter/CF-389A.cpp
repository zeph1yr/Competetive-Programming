#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,x,temp=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        temp=__gcd(temp,x);
    }
    cout<<temp*n;
}
