#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    int t;
    cin>>t;
    while(t--)
    {
       int n,o=0;
        cin>>n;
        if(n==1){cout<<"Yes"<<endl;continue;}

        else
        {
            while(n!=0&&n%10==0)
            {
                o++;n=n/10;
            }

            if(n==1){cout<<"Yes"<<endl;}
            else
            {

                if((ceil(log2(n)) == floor(log2(n))))
                {
                    if(o>=ceil(log2(n)))cout<<"Yes"<<endl;
                    else cout<<"No"<<endl;
                }
                else
                {
                    cout<<"No"<<endl;
                }
            }

        }

    }
}
