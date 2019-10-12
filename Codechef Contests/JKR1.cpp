#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
    vector<string>vec;
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        vec.push_back(s);
    }

    s= vec[n-1];
    vec.pop_back();

 reverse(s.begin(),s.end());

    cout<<s<<" ";
    n--;

    int cnt=0;

    for(int i=0,j=n-1;i<=j&&j>=n/2;i++,j--)
    {
       if(i==j){cout<<vec[i];continue;}
       cout<<vec[i]<<" "<<vec[j]<<" ";
    }

    cout<<endl;
    }
}
