#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t,n,temp,sum=0,maxm,rem;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        temp=arr[0]*arr[1];

        while(temp)
        {
            rem=temp%10;
            sum=sum+rem;
            temp=temp/10;
        }
        maxm=sum;
        sum=0;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               temp = arr[i]*arr[j];

               while(temp)
               {
                    rem=temp%10;
                    sum=sum+rem;
                    temp=temp/10;
               }

                   if(sum>maxm)
                {
                    maxm=sum;
                }
                 sum=0;
            }
        }

    cout<<maxm<<endl;

    }


}
