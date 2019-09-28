#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,se;
    cin>>n>>se;
    int x,cnt=0;
    while(n--)
    {
        cin>>x;
        if(x>=se)cnt++;
    }
    cout<<cnt;
}
