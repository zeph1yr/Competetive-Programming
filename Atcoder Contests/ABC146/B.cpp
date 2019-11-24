#include <bits/stdc++.h>

using namespace std;

int main()
{
    #define ll long long
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    char ch;
    int temp;
    string str;
    cin>>str;
    int sze = str.size();
    for(int i=0;i<sze;i++)
    {
        ch = str[i];
        temp = ch - 'A' + n;
        if(temp>=26)temp = temp-26 ;
        temp = temp+65;
        cout<<char(temp);
    }
}
