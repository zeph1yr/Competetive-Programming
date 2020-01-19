#include <iostream>

using namespace std;

int main()
{
    #define int long long
    int a,b;
    cin>>a>>b;
    int x=0,y=0;

    for(int i=0;i<a;i++)
    {
        x*=10;
        x+=b;
    }

    for(int i=0;i<b;i++)
    {
        y*=10;
        y+=a;
    }

    if(a<b)cout<<y;
    else cout<<x;

}
