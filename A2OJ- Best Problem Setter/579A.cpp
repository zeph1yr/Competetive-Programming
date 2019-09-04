#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int x;
   cin>>x;
   int cnt=1,temp;
 
   while(1)
   {
       temp=log2(x);
       if( pow(2,temp)==x)break;
       else x = x - pow(2,temp);
        cnt++;
   }
 
   cout<<cnt;
 
}
