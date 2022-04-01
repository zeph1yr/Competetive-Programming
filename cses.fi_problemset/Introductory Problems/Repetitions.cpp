#include <iostream>
using namespace std;

int main()
{
    char ch,temp = NULL;

    int cnt=0,ans=0;
    string str;
    cin>>str;

    for(int i=0;i<str.size();i++)
    {
        if(temp==str[i]){cnt++;ans=max(ans,cnt);}
        else cnt=0;
        temp=str[i];
    }

    cout<<ans+1;
}
