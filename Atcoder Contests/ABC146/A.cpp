#include <bits/stdc++.h>

using namespace std;

int main()
{
    #define ll long long
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string arr[7]={"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    string x;
    cin>>x;
    int cnt=0,ans;
    for(int i=0;i<7;i++)
        {
            if(x==arr[i]){ans=i;break;}
        }


       cout<<7-ans;
}
