#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

    int t;
    long long int n;
    cin>>t;

    while(t--)
    {
       long long int x,y,sum=0,sum1=0,var,zero=0;
        cin>>n;
        sum=0;
        for(long long int i=0;i<n;i++)
        {
            cin>>var;
            x=max(zero,i-var);
            y=min(n,i+var+1);
            sum+=y-x;
        }

        for(int i=0;i<n;i++)
        {
            cin>>var;
            sum1+=var;
        }

        if(sum==sum1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}
