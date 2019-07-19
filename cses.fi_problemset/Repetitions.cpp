#include <iostream>
 
using namespace std;
 
int main()
{
    char ch=NULL,temp;
    int cnt=0,ans=0;
    string str;
    cin>>str;
    int len=str.size();
    for(int i=0;i<len;i++)
    {
       ch=str[i];
        if(temp==ch){cnt++;ans=max(ans,cnt);}
        else cnt=0;
        temp=ch;
    }
 
    cout<<ans+1;
}
