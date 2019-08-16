#include <bits/stdc++.h>
using namespace std;

int main() {
        
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        #define int long long int
        int n,var,ans=0;
        cin>>n>>var;
        int a[n];
        for(int i=0;i<n;i++){cin>>a[i];}
        sort(a,a+n);
            
       int j=0,k=1;
       while(j<n){
          
           if(abs(a[j]-a[k])>=var){ans+=n-k;j++;}
           else {k++;}
           
          }
          cout<<ans;
            
}
