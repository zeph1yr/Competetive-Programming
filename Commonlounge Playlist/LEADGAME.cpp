#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t,h,posn=0,flag=0,x=-1;
    cin>>t>>h;
    int arr[t];

    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }

    while(x!=0)
    {
        cin>>x;
        if(x==1 && posn>=1){posn=posn-1;}
        else if(x==2 && posn<t-1){posn=posn+1;}
        else if(x==3 && arr[posn]>0 && flag==0){flag=1;arr[posn]=arr[posn]-1;}
        else if(x==4 && flag!=0 && arr[posn]<h){arr[posn]=arr[posn]+1;flag=0;}
    }

    for(int i=0;i<t;i++)
    {
        cout<<arr[i]<<" ";
    }
}
