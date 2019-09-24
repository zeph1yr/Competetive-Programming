#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%4==0||n%4==3)
        {
            cout<<"YES"<<endl;
            if(n%4==0)
            {
                cout<<n/2<<endl;
                for(int i=1;i<=n/2;i=i+2)
                {
                    cout<<i<<" ";
                }
                for(int i=n/2+2;i<=n;i=i+2)
                {
                    cout<<i<<" ";
                }
                cout<<endl;

                cout<<n/2<<endl;

                for(int i=2;i<=n/2;i=i+2)
                {
                    cout<<i<<" ";
                }
                for(int i=n/2+1;i<=n;i=i+2)
                {
                    cout<<i<<" ";
                }
            }
            else
            {
                int cnt=0;

            cout<<n/2<<endl;

                cout<<3<<" ";

                for(int k=5;k<=n;)
                {
                    if(cnt%3==0){cout<<k<<" "<<k+1<<" ";k=k+3;}
                    else if(cnt%3==1){cout<<k<<" ";k=k+3;}
                    else if(cnt%3==2){cout<<k<<" ";k=k+2;}
                    cnt++;
                }


        cnt=0;
                cout<<endl<<n/2+1<<endl;

                for(int k=1;k<=n;)
                {
                    if(cnt%3==0){cout<<k<<" "<<k+1<<" ";k=k+3;}
                    else if(cnt%3==1){cout<<k<<" ";k=k+3;}
                    else if(cnt%3==2){cout<<k<<" ";k=k+2;}
                    cnt++;
                }


            }
        }

    else cout<<"NO";
}
