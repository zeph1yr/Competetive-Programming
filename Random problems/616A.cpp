#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s1,s2,sa,sb;
    cin>>s1>>s2;
   int len=s1.size(),start=0,flag=0;
 
   for(int i=0;i<len;i++)
   {
       if(s1[i]!='0'){start=i;flag=1;break;}
   }
 
  if(start>=len || flag==0)sa='0';
   else sa.append(s1,start,len);
 
start=0;
 len=s2.size();
flag=0;
 
   for(int i=0;i<len;i++)
   {
       if(s2[i]!='0'){start=i;flag=1;break;}
   }
 
 
   if(start>=len||!flag)sb='0';
   else sb.append(s2,start,len);
 
    if(sa.size()>sb.size()){cout<<'>';return 0;}
    else if(sa.size()<sb.size()){cout<<'<';return 0;}
    else
    {
        for(int i=0;i<sa.size();i++)
        {
            if(sa[i]>sb[i]){cout<<'>';return 0;}
            else if(sa[i]<sb[i]){cout<<'<';return 0;}
        }
        cout<<'=';return 0;
    }
 
}
