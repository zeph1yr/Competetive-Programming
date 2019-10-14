#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q,x;
    cin>>n>>q;
    multiset<int>mset;

    mset.insert(-1);

    for(int i=0;i<n;i++)
    {
        cin>>x;
        mset.insert(x);
    }

    for(int i=0;i<q;i++)
    {
        cin>>x;
        auto pos = mset.lower_bound(x);
        if(*pos != x)pos--;
        cout<<*pos<<endl;
       if(*pos != -1) mset.erase(pos);
    }
}
