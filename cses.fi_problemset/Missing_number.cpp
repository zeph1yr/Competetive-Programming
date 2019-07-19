#include <iostream>
 
using namespace std;
 
int main()
{
    long long int t,n,sum=0;
    cin>>t;
    for(int i=0;i<t-1;i++)
    {
        cin>>n;sum+=n;
    }
    cout<< (t*(t+1))/2 - sum;
}
