#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,k,q,x;
  cin>>n>>k>>q;
  int arr[n+2]={0};
  for(int i=0;i<q;i++){cin>>x;arr[x-1]++;}

  int temp=q-k;

  for(int i=0;i<n;i++)
  {
      if(arr[i]>temp)cout<<"Yes"<<endl;
      else cout <<"No"<<endl;
  }

}


