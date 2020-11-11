#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> c1(100005,0);

int dfscnt(vector<int> tree[], int n)
{
    int cnt=1,x;

   for(int i=0;i<tree[n].size();i++)
   {
       cnt += dfscnt(tree, tree[n][i]);
   }

   c1[n]=cnt;
   return cnt;
}


int ans(vector<int> tree[],int n)
{
  int cnt = c1[n];
  int fin = -1, x;

  for(int i=0;i<tree[n].size();i++)
  {
     x = tree[n][i];
     cnt += ans(tree, x);
     fin = max(fin,cnt);
     cnt = c1[n];
  }

  if(tree[n].size()==0) return cnt;
  return fin;
}

main()
{
    int t,n,a,b;
    cin>>t;
    while(t--)
    {

        c1.clear();

        cin>>n;
        vector<int> tree[n+1];

        for(int i=2;i<=n;i++)
        {
            cin>>a;
            tree[a].push_back(i);
        }

        dfscnt(tree,1);

        cout<<ans(tree,1)<<endl;
    }
}
