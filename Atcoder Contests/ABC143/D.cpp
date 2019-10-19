#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 vector<int>vec;
 int x;
 for(int i=0;i<n;i++)
 {
   cin>>x;
   vec.push_back(x);
 }

 sort(vec.begin(),vec.end());

 int cnt=0,flag;

 for(int i=0;i<n;i++)
 {
     flag=0;
     for(int j=i+1;j<n;j++)
     {
         for(int k=j+1;k<n;k++)
         {
             if(vec[k]<vec[i]+vec[j])cnt++;
             else {flag=1;break;}
         }
     }
 }

 cout<<cnt;
}
