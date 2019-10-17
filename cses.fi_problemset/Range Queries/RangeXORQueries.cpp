#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b,x;
    vector<int>vec;
    cin>>a>>b;
    for(int i=0;i<a;i++){cin>>x;vec.push_back(x);}
    vector<int>xxor;
    xxor.push_back(vec[0]);
    for(int i=1;i<a;i++)
    {
        xxor.push_back(xxor[i-1]^vec[i]);
    }
 
    int y,z;
 
    for(int i=0;i<b;i++)
    {
     cin>>y>>z;
     if(y==1 && z==a)cout<<xxor[a-1]<<endl;
     else if(x==y)cout<<vec[x-1]<<endl;
     else if(y==1)
     {
         cout<<xxor[z-1]<<endl;
     }
     else if(z==a)
     {
         cout<< (xxor[y-2]^xxor[a-1])<<endl;
     }
 
     else
     {
         cout<<(xxor[y-2]^xxor[z-1])<<endl;
     }
 
    }
 
}
