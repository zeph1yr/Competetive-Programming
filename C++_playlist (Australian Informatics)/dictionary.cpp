#include <iostream>

using namespace std;

int main()
{
  //freopen("dictin.txt", "r", stdin);
	//freopen("dictout.txt", "w", stdout);
     int d,w,x,flag=0,temp=0;
     int arr[1000];
     int ar[1000];
     cin>>d>>w;
     for(int i=0;i<d;i++)
     {
         cin>>arr[i]>>ar[i];
     }
     for(int i=0;i<w;i++)
     {
         cin>>x;
        for(int j=0;j<w;j++)
        {
        if(x==arr[j])
         {
             flag=1;
            temp=j;
         }
         }
        if(flag==0)
        {
             cout<<"C?";
             cout<<endl;
        }
        else
        {
            cout<<ar[temp];
          cout<<endl;
          flag=0;
         }
     }

    return 0;
}
