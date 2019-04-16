#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	//freopen("rainin.txt", "r", stdin);
	//freopen("rainout.txt", "w", stdout);
    int t,ncap,z,sum=0;
    cin >> t >>ncap;
    for(int i=1; i<=t; ++i){

            cin>>z;
            sum+=z;
            if(sum>=ncap){
                cout<<i;
            break;}
             }
}
