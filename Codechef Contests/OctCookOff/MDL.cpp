#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long int
    int t;
    cin>>t;
    while(t--)
    {
       vector<pair<int,int>>vec;
       int n,x,a,b;
       cin>>n;
        if(n<=2)
        {
           int temp=2;
            while(temp--){cin>>x;cout<<x<<" ";}
            cout<<endl;
        }
        else
        {
       for(int i=0;i<n;i++){cin>>b;vec.push_back(make_pair(b,i));}
       sort(vec.begin(),vec.end());
      if(vec[0].second<vec[n-1].second) cout<<vec[0].first<<" "<<vec[n-1].first<<endl;
       else cout<<vec[n-1].first<<" "<<vec[0].first<<endl;
       }
    }
    }
