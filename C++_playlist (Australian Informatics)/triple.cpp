#include <bits/stdc++.h>

using namespace std;

int main()

{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    //freopen("tripin.txt","r",stdin);
    //freopen("tripout.txt","w",stdout);
 long long unsigned int n,t,count=0;
 long long int arr[1000000];
    cin>>t;
    for(long long int i=0;i<t;i++){
        cin>>n;
        arr[i]=n;
    }

    for(long long int i=0;i<t;i++){
        if(fmod(arr[i],3)==0||arr[i]==0){count++;}
    }

    if(count!=0){cout<<count<<"\n";}else{cout<<"Nothing here!";}
    for(long int i=0;i<t;i++){
        if(fmod(arr[i],3)==0){
            cout<<i+1<<" ";
        }
    }
    return 0;
}
