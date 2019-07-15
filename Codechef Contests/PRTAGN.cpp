#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int t,n,x,len,e,o;

    vector <int> vec;
    vector <int>::iterator itr;
    int arr[1000001];
    cin>>t;
    while(t--)
    {
        e=0;o=0;
        cin>>n;
        cin>>x;
        vec.push_back(x);
        arr[x]++;
        n=n-1;
        len=1;

        if(__builtin_popcount(x) % 2 == 0) e++;
        else o++;

        cout<<e<<" "<<o<<endl;

        while(n--)
        {
            cin>>x;
            if(arr[x]==0)
            {
               if(__builtin_popcount(x) % 2 == 0) e++;
                else o++;

               arr[x]++;
               vec.push_back(x);
                for(int i=0;i<len;i++)
                {
                    int temp = vec[i]^x;

                    if(__builtin_popcount(temp) % 2 == 0) e++;
                    else o++;

                    if(arr[temp]==0){vec.push_back(temp);arr[temp]++;}
                }
               len=vec.size();
            }

            cout<<e<<" "<<o<<endl;

        }
    fill(arr,arr+1000001,0);
    vec.clear();
    }
}
