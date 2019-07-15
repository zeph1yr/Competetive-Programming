#include <iostream>
 
using namespace std;
 
int main()
{
   int n,x,bal,temp,cnt=0;
   char ch;
   cin>>n>>x;
   while(n--)
   {
       cin>>ch>>temp;
       if(ch=='+'){x=x+temp;}
       else if(ch=='-'){if(temp<=x)x=x-temp; else cnt++;}
   }
   cout<<x<<" "<<cnt;
}
