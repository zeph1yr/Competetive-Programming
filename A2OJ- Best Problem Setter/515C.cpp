#include <bits/stdc++.h>
using namespace std;

#define iof freopen("input.txt","r", stdin) ;freopen("output.txt","w", stdout) ;
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define mod 1000000007
#define vec vector<long long>
#define pb push_back
#define ll  long long
#define f(b) for(int i=0;i<b;i++)
#define f2(b) for(int j=0;j<b;j++)
#define f3(b) for(int k=0;k<b;k++)
#define endl '\n'
#define pi pair<int,int>
#define INF 1000000000000000001

long long pow(long long x, long long y){ if (y == 0) return 1; else if (y % 2 == 0) return pow(x, y / 2) * pow(x, y / 2);else return x * pow(x, y / 2) * pow(x, y / 2);}
long long dig(long long n) {return floor(log10(n) + 1);}

int main()
{
	io
	#define int long long

    int arr[] = {0,0,2,3,322,5,53,7,2227,7332};
    int n;
    cin>>n;
    string s,ans;
    cin>>s;

    f(n)
    {
        if(s[i]!='0'&&s[i]!='1')
        {
            ans+=to_string(arr[s[i]-'0']);
        }
    }


    vec v;

    f(ans.size())
    {
        v.pb(ans[i]-'0');
    }

    sort(v.begin(),v.end(),greater<int>());

    f(v.size())cout<<v[i];

}
