#include <iostream>
 
using namespace std;
 
int main()
{
    int n,temp,cnt=0;
    cin>>n;
    while(n!=0)
    {
       n=n/5;
       cnt+=n;
    }
    cout<<cnt;
}
