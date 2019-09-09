#include <bits/stdc++.h>

using namespace std;

int main()
{
   int x;
   cin>>x;

   int arr[8]={0};
   int sum=0,cnt=0;

   for(int i=0;i<7;i++)

   {
        cin>>arr[i];
        sum+=arr[i];
   }

   for(int i=0;;i++)
   {
        if(i==7)i=0;
        x=x-arr[i];
        if(x<=0){x=i;break;}
   }

   cout<<x+1;

}
