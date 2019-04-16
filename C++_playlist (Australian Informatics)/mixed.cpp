#include  <bits/stdc++.h>

using namespace std;

int main()
{
  //freopen("mixin.txt","r",stdin);
  //freopen("mixout.txt","w",stdout);
  int n,d;
  cin >> n >> d;
  if(n%d==0)
 cout<< n/d;
 else if (n%d!=0)
    cout << n/d<<" " << n%d << "/" << d;
 }
