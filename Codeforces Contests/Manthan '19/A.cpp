#include <iostream>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,c,temp;
    cin>>a>>b>>c;
    temp=a^b;
    c=c%3;
    if(c==0)cout<<a<<endl;
    else if(c==1)cout<<b<<endl;
    else if(c==2)cout<<temp<<endl;
 
    }
 
}
