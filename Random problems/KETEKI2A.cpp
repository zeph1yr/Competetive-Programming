#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int a1=0,a2=0;
	int arr[n+1]={0};
	for(int i=0;i<n;i++)cin>>arr[i];
	
	int temp=0;
	int lim1=0;
	
	if(n%2==0)lim1=n/2;
	else lim1=n/2 +1;
	
	for(int i=0;i<lim1;i++)a1+=arr[i];
	
	for(int i=lim1;i<n;i++)a2+=arr[i];

	cout<<a2-a1;
	
}
