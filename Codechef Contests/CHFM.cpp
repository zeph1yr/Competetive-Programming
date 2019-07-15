#include <iostream>

using namespace std;

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

    long long int t,n,sum,x,var,ans;
    int flag;

    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        sum=0;
        long long int arr[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(arr[i]==0){arr[i]=x;}
            sum+=x;
        }



        if(sum%n==0)
            {
                var=sum/n;
                for(int i=0;i<n;i++)
                {
                    if(arr[i]==var){ans=i;flag=1;break;}
                }

                if(flag)cout<<++ans<<endl;
                else cout<< "Impossible"<<endl;
            }
        else {cout<<"Impossible"<<endl;}

        fill(arr, arr+n, 0);

    }

}
