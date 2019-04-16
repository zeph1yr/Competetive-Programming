#include <iostream>

using namespace std;

int main()
{
   //freopen("encyin.txt", "r", stdin);
	 //freopen("encyout.txt", "w", stdout);
    int arr[10000],n,q,x;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    for(int i=0;i<q;i++)
    {
     cin>>x;
     x--;
     cout<<arr[x];
     cout<<endl;
    }
    return 0;
}
