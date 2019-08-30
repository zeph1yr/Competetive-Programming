#include<bits/stdc++.h>
using namespace std;
int n, a, c;
main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a%2) c++;
	}
	cout<<min(c, n-c);
	
}
