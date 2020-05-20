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
#define INF 1e+18

long long pow(long long x, long long y){ if (y == 0) return 1; else if (y % 2 == 0) return pow(x, y / 2) * pow(x, y / 2);else return x * pow(x, y / 2) * pow(x, y / 2);}

int main()
{
	io
	#define int long long
	int n,x;

	cin>>n>>x;

	int arr[n];

	int ways[x+1]={0};

	ways[0]=1;

	f(n)
	{
        cin>>arr[i];
	}

	f(n)
	{
        f2(x+1)
        {
            if(arr[i]<=j)
                {
                    ways[j]+= ways[j-arr[i]]%mod;
                }
        }
	}

	cout<<ways[x]%mod;

}
