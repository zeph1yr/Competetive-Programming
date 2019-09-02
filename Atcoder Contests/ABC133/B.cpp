#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,d;
    cin>>n>>d;
    vector<vector<int>> vec;
    int x;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<d;j++)
          {
             cin>>x;
             v.push_back(x);
          }
          vec.push_back(v);
          v.clear();
    }

int temp=0,diff=0,value,cnt=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {

            for(int k=0;k<d;k++)
            {
                temp=vec[i][k] - vec[j][k];
                diff+=temp*temp;

            }
           value=sqrt(diff);
            if(value*value == diff)cnt++;
            diff=0;
        }
    }

    cout<<cnt;
}
