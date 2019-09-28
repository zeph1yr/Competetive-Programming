#include <bits/stdc++.h>

using namespace std;

int main()
{
    float n;
    cin>>n;
    if(fmod(n,2)==0)cout<<0.50000000000;
    else cout<<fixed<<setprecision(10)<<ceil(n/2)/n;
}
