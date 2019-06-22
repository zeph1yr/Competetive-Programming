#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  int t,x=0,y=0,maxm=0,temp=0,ans,a,b;
  cin>>t;
  while(t--)
  {
    cin>>a>>b;
    x=x+a;
    y=y+b;
    if(x>y)
    {
        temp=x-y;
        if(temp>maxm)
            {
                  maxm=temp;
                  ans=1;
            }
    }
    else
    {
        temp=y-x;
        if(temp>maxm)
        {
            maxm=temp;
            ans=2;
        }
    }
  }
  cout<<ans<<" "<<maxm;
}
