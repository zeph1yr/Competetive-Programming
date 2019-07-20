#include <iostream>

using namespace std;

int main()
{
    int n,x,m=0,m2=0,index=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>m){m2=m;m=x;index=i;}
        else if(x>m2)m2=x;
    }


    for(int i=0;i<n;i++)
    {
        if(i==index)cout<<m2<<endl;
        else cout<<m<<endl;
    }
}
