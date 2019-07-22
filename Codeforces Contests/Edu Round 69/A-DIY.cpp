#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x,cnt;
    cin>>t;
    vector <int> vec;
    while(t--)
    {
        vec.clear();cnt=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            vec.push_back(x);
        }

        sort(vec.begin(),vec.end(),greater<int>());
        int in=0,jn=1;
        int temp=n;
        int temp1=n;
        while(vec[in]<temp-1){temp--;}
        while(vec[jn]<temp1-1){temp1--;}
        cout<<min(temp,temp1) - 2<<endl;


    }
}
