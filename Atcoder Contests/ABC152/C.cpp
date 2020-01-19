#include <bits/stdc++.h>
using namespace std;

int main()
{
	#define int long long
	int n;
	cin>>n;
	int x;
	int temp=99999999999999;
	int cnt=0;
	for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<=temp)
        {
        cnt++;
        temp=x;
        }
    }

    cout<<cnt;

}
