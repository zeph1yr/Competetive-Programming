/* Difference Array, Range update in O(n)

Input - 5 5
        1 2 3 4 5

Output - 5 5 4 4 3

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    int n,flag=0;
    cin>>n;

    int arr[n+1]={0};

    vector <int> vec,vec2; // Vector

    int l,r,x;

    int var;//input variable

    for(int i=0;i<n;i++)
    {
        cin>>x;
        l=max(0,i-x);
        r=min(n-1,i+x);

        arr[l]+=1;
        arr[r+1]+=-1;
    }

    for(int i=0;i<n;i++)
    {
        cin>>var;
        vec2.emplace_back(var);
    }

    vec.push_back(arr[0]);

    for(int i=1;i<n;i++)
    {
        var=arr[i]+arr[i-1];
        arr[i]=arr[i]+arr[i-1];
        vec.emplace_back(var);
    }

    sort(vec.begin(),vec.end());
    sort(vec2.begin(),vec2.end());

    for(int i=0;i<n;i++)
    {
        if(vec[i]!=vec2[i]){flag=1;break;}
    }

    if(flag)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    //sort(vec.begin(),vec.end());

}
}
