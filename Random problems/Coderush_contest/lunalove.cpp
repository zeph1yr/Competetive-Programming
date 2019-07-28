#include <iostream>

using namespace std;

int main()
{
    long long int l,r,temp;
    bool flag=0;
    cin>>l>>r;
    if(l>=r){cout<<137;}
    else
    {
        for(int i=l;i<=r;i++)
        {
             temp=i;
             if(temp<0){temp*=-1;flag=1;}
            if(temp%10==1||temp%10==3||temp%10==7){if(flag){cout<<-1*temp<<" ";flag=0;}else cout<<temp<<" ";}
        }
    }

    return 0;

}
