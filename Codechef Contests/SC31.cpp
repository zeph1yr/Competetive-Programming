#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test,n;
    string str,s1,s2="abcdefghij";

    cin>>test;
    while(test--)
    {
        cin>>n;
        cin>>str;
        for(int i=0;i<n-1;i++)
        {
            cin>>s1;
            for(int k=0;k<10;k++) if(str[k]==s1[k])s2[k]='0'; else s2[k]='1';
            str=s2;
        }

        int tmp=0;
        for(int i=0;i<10;i++) if(str[i]=='1')tmp++;
        
        cout<<tmp<<endl;
        
    }
}
