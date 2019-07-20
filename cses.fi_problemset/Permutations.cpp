#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int lim=n;
    if(n>1 && n<4){cout<<"NO SOLUTION"; return 0;}
    else if(n==1)cout<<1;
    else if(n==4)cout<<"2 4 1 3";
    else
    {
        if(n%2==0)n=n/2;
        else {n=n/2;n+=1;}
        int temp=n+1;
        int temp1=temp;
        for(int i=1;i<temp1;i++)
        {
            cout<<i<<" ";
            if(temp!=lim+1)cout<<temp<<" ";
            temp++;
        }
    }
}
