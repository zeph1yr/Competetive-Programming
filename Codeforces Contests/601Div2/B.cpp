#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    int t;cin>>t;while(t--)
    {
      int n,m,x;
      cin>>n>>m;
      vector<pair<int,int>>vec;
      for(int i=0;i<n;i++)
      {
          cin>>x;
          vec.push_back(make_pair(x,i+1));
      }
 
      sort(vec.begin(),vec.end());
 
      vector<int>ans;
 
      if(m<n||m==2){cout<<-1<<endl;}
      else
      {
 
          ans.push_back(vec[0].first + vec[1].first);
          for(int i=1;i<n-1;i++)
          {
          ans.push_back(vec[i].first + vec[i+1].first + ans[i-1]);
          }
          ans.push_back(vec[n-1].first + vec[0].first+ans [n-2]);
 
          int temp = m/n;
          int t1= m - temp*n;
 
          int lol=0;
 
          if(t1==0) lol = temp*ans[n-1] ;
            else lol =  temp*ans[n-1] + ans[t1-1];
 
            cout<<lol<<endl;
 
          while(temp--)
          {
              for(int i=0;i<n-1;i++)
              {
                  cout<<vec[i].second<<" "<<vec[i+1].second<<endl;
              }
 
              cout<<vec[n-1].second<<" "<<vec[0].second<<endl;
          }
 
              for(int i=0;i<t1;i++)
              {
                  cout<<vec[i].second<<" "<<vec[i+1].second<<endl;
              }
 
 
      }
    }
 
}
