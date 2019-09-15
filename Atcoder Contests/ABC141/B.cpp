#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int len=s.size();
  for(int i=0;i<len;i++)
  {
    if(i%2==0){if(s[i]=='L'){cout<<"No";return 0;}}
    if(i%2!=0){if(s[i]=='R'){cout<<"No";return 0;}}
  }
cout<<"Yes";
}


