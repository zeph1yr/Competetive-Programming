#include <bits/stdc++.h>
using namespace std;
int main()
{
    #define int long long int
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
    vector <int> vec;
    int arr[101]={0};

    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr[x]++;
        vec.push_back(x);
    }

    sort(vec.begin(),vec.end());

     int tmp=vec[k-1];

     int total=arr[tmp];

    int sum=0,fin=0;

    for(int i=0;i<k;i++)
    {
        if(vec[i]==tmp)fin++;
    }

    int n=total,r=fin,p=1,k=1;
    
    if (n- r < r) r = n - r;
    if (r != 0)
        {
        while (r)
         {
            p =p* n;
            k =k*r;
            int m = __gcd(p, k);
            p =p/ m;
            k = k/ m;
            n=n-1;
            r=r-1;
        }
    }
    else p = 1;
    
    cout << p << endl;
}

}
