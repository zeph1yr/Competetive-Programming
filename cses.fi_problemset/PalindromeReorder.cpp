#include <bits/stdc++.h>

using namespace std;

int main()
{
    int temp,flag=0,lol;
    int arr[26]={0};
    string s;
    char ch,wtf;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        temp=s[i]-'A';
        arr[temp]++;
    }

    int cnt=0;

    for(int i=0;i<26;i++)
    {
        if(arr[i]%2!=0){cnt++;}
    }

    string ans,last;

    if(cnt>1)cout<<"NO SOLUTION";
    else
    {
        for(int i=0;i<26;i++)
        {
            if(arr[i]%2==0)
            {
               lol = arr[i]/2;
               for(int k=0;k<lol;k++)
                {
                    ch=char(65+i);
               ans.push_back(ch);
               }
            }
            else {
                    flag=1;
                    lol=arr[i]/2;
                    lol--;
                    if(arr[i]==1)wtf=char(i+65);
                    else
                    {
                       lol=arr[i]/2;
                        wtf=char(i+65);
        for(int k=0;k<lol;k++)
            {
                ch=char(65+i);
               ans.push_back(ch);
               }
                    }

            }
        }

        cout<<ans;
       if(flag)cout<<wtf;
    reverse(ans.begin(), ans.end());
    cout<<ans;

}}

