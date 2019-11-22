#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
        int n,x,a;
        cin>>n>>x;
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            vec.push_back(make_pair(a,i+1));
        }

        sort(vec.begin(),vec.end());

        vector<int>v3;

        for(auto it:vec){v3.push_back(it.first);}

        int temp;

        for(int i=0;i<n;i++)
        {
          temp = abs(x-vec[i].first);
          if(vec[i].first >= x)break;
          if(binary_search(v3.begin(),v3.end(),temp))
          {
                for(int j=0;j<n&&i!=j;j++)
                {
                    if(temp == vec[j].first)
                    {
                        cout<<vec[i].second<<" "<<vec[j].second;
                        return 0;
                    }
                }

          }
        }

        cout<<"IMPOSSIBLE";

}
