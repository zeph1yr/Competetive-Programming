#include <iostream>
 
using namespace std;
 
int main()
{
    int x;
    int ans[103]={0};
 
    int sum=0;
 
    for(int i=0;i<5;i++)
    {
        cin>>x;
        sum+=x;
        if(ans[x]<3)ans[x]++;
    }
    int temp=0,a=0;
 
    for(int i=0;i<102;i++)
    {
        if(ans[i]>1)temp=ans[i]*i;
        a=max(a,temp);
    }
 
    cout<<sum-a;
 
}
