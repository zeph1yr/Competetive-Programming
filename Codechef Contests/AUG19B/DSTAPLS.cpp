#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;
    long long int n,k,temp,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k==1){cout<<"NO"<<endl;continue;}
        temp = n/k;
        if(temp%k!=0){cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
    }
}
