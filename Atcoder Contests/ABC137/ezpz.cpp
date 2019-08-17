#include <iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int ans= (a+b)>(a-b)?(a+b>a*b?a+b:a*b):(a-b>a*b?a-b:a*b);
  cout<<ans;
}
