#include <iostream>
using namespace std;
int main()
{
 float n,ans=0,x;
  cin>>n;
  while(n--)
  {
    cin>>x;
    if(x==0)continue;
    ans+=1.0/x;
  }
  
  cout<<1.0/ans;
}
