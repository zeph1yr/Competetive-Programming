#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,t,diff,a1,a2;
    cin>>t;
    while(t--)
    {
    cin>>a>>b;
    if(a==0 && b==0){cout<<"YES"<<endl;continue;}

    if(b>a)swap(a,b);

    if(a > b+1)
    {
        diff = a - b;
        diff--;
        b-=diff;
        a = a-(diff*2);
    }

    if(b<=0){cout<<"NO"<<endl;continue;}

    a1=a%3;
    a2=b%3;

    if(a1==0&&a2==0)cout<<"YES"<<endl;
    else if(a1==2&&a2==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}
