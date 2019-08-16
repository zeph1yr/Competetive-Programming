#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	vector <pair<int,int>> vi;
	vector <int> v,w;
	int var2=-1,var1=-1;

	int n,x,y,a,b,ans=100000001,diff=0;

	cin>>n>>x>>y;

	for(int i=0;i<n;i++)
	{
	    cin>>a>>b;
	    vi.push_back(make_pair(a,b));
	}

	for(int i=0;i<x;i++)
	{
	 cin>>a;
	v.push_back(a);
	}

	for(int i=0;i<y;i++)
	{cin>>a;
	w.push_back(a);
	}

    sort(vi.begin(),vi.end());
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());


    for(int i=0;i<n;i++)
    {

       if(vi[i].first>=v[0]&&vi[i].second<=w[y-1])
       {
       auto var1=lower_bound(v.begin(),v.end(),vi[i].first);
       if(*var1!=vi[i].first)var1--;
       auto var2=lower_bound(w.begin(),w.end(),vi[i].second);

     diff=*var2-*var1+1;
     //cout<<ans<<" "<<diff<<endl;
        ans=min(ans,diff) ;
       }
    }

    cout<<ans;
    }
