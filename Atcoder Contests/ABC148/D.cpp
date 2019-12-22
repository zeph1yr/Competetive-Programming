#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n,x;
    cin>>n;
    long long cnt=0,a=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==a+1)
        {
            cnt++;
            a=a+1;
        }
    }

    if(cnt==0)cout<<-1;
    else cout<<n-cnt;

}
