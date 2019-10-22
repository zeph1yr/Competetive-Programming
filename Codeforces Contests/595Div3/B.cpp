#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        vector<int>vec;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            vec.push_back(x);
        }
 
        int cnt,temp;
 
        for(int i=0;i<n;i++)
        {
            cnt=1,temp=-1;
            x=vec[i];
            while(i!=x-1)
            {
 
                temp=vec[x-1];
                x=temp;
                cnt++;
            }
            cout<<cnt<<" ";
        }
        cout<<endl;
 
 
    }
}
