#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string s;
    char ch;
    int t,n;
    cin>>t;
    while(t--)
    {
        bool flag=0,change=0;
        cin>>s;
        n = s.size();

        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                {
                    flag=1;
                }

            else if(s[i]=='1')
            {
                flag=0;
                if(s[i+1]=='0')s[i+1]='1';
                else s[i+1]='0';
            }
        }

        if(flag)cout<<"LOSE"<<endl;
        else cout<<"WIN"<<endl;
    }

}
