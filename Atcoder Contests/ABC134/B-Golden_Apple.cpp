#include <iostream>
using namespace std;

int main()
{
  int n,d,temp;
  cin>>n>>d;
  if(n<=d){cout<<1;return 0;}
  temp = 2*d + 1;
  if(n%temp==0){cout<<n/temp;}
  else {
    cout<< (n/temp)+1;
  }
}
