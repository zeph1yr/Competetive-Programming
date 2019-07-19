#include <iostream>
 
using namespace std;
 
int main()
{
    int n,x,temp=0;
    long long int cnt=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x<temp){cnt+= (temp-x);temp=x+(temp-x);}
        else temp=x;
    }
 
    cout<<cnt;
}
