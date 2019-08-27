/*
ID: zeph1yr1
PROG: gift1
LANG: C++14
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("gift1.in","r",stdin);
    freopen("gift1.out","w",stdout);

    vector<pair<string,int>> vi;
    string s;
    int n;
    cin>>n;
    int arr[n+1]={0};
    for(int i=0;i<n;i++)
    {
        cin>>s;
        vi.push_back(make_pair(s,i));
    }

    int m,n1,bal,temp;

    for(int i=0;i<n;i++)
    {
        cin>>s>>m>>n1;
        if(m==0 || n1==0)continue;
        bal=m%n1;
        for(auto itr:vi){if(itr.first == s){temp=itr.second;arr[temp]-=m-bal;}}
        m=(m-bal)/n1;
        for(int j=0;j<n1;j++)
        {
            cin>>s;
            for(auto it:vi){if(it.first == s){temp=it.second;arr[temp]+=m;}}
        }
    }

   for(int i=0;i<n;i++)
   {
       cout<<vi[i].first<<" "<<arr[i]<<endl;
   }
}
