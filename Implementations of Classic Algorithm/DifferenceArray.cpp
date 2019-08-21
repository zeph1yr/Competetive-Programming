/* Difference Array, Range update in O(n)

Input - 5 5
        1 2 3 4 5

Output - 5 5 4 4 3

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; // size of array
    cin>>n;

    int arr[n+1]={0};

    vector <int> vec; // Vector

    int l,r,x;

    int var;//input variable

    int tc; // testcases
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cin>>x;
        l=max(0,i-x);
        r=min(n-1,i+x);

        arr[l]+=1;
        arr[r+1]+=-1;
    }

    vec.push_back(arr[0]);

    for(int i=1;i<n;i++)
    {
        var=arr[i]+arr[i-1];
        arr[i]=arr[i]+arr[i-1];
        vec.emplace_back(var);
    }

    for(auto it:vec)cout<<it<<" ";

    //sort(vec.begin(),vec.end());

}
