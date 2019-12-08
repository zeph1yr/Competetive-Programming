#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int n = s.size();
    int cnt=0;
  if(n%2==0)
    {
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            if(s[i]!=s[j])cnt++;

        }
    }
    else
    {
        for(int i=0,j=n-1;i<=n/2;i++,j--)
        {
            if(s[i]!=s[j])cnt++;
        }
    }

    cout<<cnt;
}
