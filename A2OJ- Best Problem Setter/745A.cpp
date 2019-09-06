#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,temp,str;
    cin>>s;

    int cnt=1;

    vector<string>v;

    int flag;

    int n=s.size();

    for(int i=0;i<n;i++)
    {
        flag=0;
        temp=s[n-1];

        s.pop_back();
        str=temp + s;

        s=str;

        for(auto it:v){if(it==str)flag=1;}

        if(flag)continue;
        else v.push_back(str);

    }

    cout<<v.size();


}

 
