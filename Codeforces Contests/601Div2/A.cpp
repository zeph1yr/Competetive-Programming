#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    int t;cin>>t;while(t--)
    {
      int a,b,temp,diff;
      cin>>a>>b;
      int cnt=0;
      if(a>b)
      {
 
          diff = a-b;
          temp = diff/5;
          diff-=temp*5;
          cnt+=temp;
 
          if(diff!=0)
          {
          if(a>0 && a>b)
          temp = diff/2;
          diff-=temp*2;
          cnt+=temp;
 
          cnt+=diff;
          }
 
          cout<<cnt<<endl;
      }
      else if(a<b)
      {
        swap(a,b);
 
          diff = a-b;
          temp = diff/5;
          diff-=temp*5;
          cnt+=temp;
 
          if(diff!=0)
          {
          if(a>0 && a>b)
          temp = diff/2;
          diff-=temp*2;
          cnt+=temp;
 
          cnt+=diff;
          }
 
          cout<<cnt<<endl;
      }
 
      else cout<<0<<endl;
    }
 
}
