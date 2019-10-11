#include <bits/stdc++.h>
using namespace std;

long long ncr(int n, int r)
{
	long long p = 1, k = 1;

	if (n - r < r)
		r = n - r;

	if (r != 0) {
		while (r) {
			p *= n;
			k *= r;
			long long m = __gcd(p, k);
			p /= m;
			k /= m;

			n--;
			r--;
		}
	}

	else p = 1;
	return p;
}


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,x;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int comb = ncr(n,2);
        if(comb%n!=0)cout<<"NO"<<endl;
        else
        {
            int temp = comb/n;
            int cnt=1;

            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                cnt=1;
                vector<int>vec;
                for(int k=0;k<temp;k++)
                {
                vec.push_back((i+cnt)%n);
                cnt++;
                }

                sort(vec.begin(),vec.end());


                int hj=0;
                for(int j=0;j<n;j++)
                {
                  if(j==vec[hj]){cout<<1;hj++;}
                 else cout<<0;
                 }

                cout<<endl;
            }
        }

}
}

