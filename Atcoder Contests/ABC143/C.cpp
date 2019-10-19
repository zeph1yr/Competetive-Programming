#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 char ch,temp='1';
 int cnt=0;
 for(int i=0;i<n;i++)
 {
     cin>>ch;
     if(temp==ch){}
     else cnt++;
     temp=ch;
 }
cout<<cnt;
}
