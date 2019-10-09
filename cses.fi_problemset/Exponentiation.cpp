// Computing a^b efficiently by modular exponentiation
// O(log n )

#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long powf(long long a, long long b, long long m)
{
    a = a % m;
    long long res = 1; // Answer Variable
    while (b > 0)
    {

        if (b & 1)res = res * a % m; //if b is odd, result = (result * a)
        a = a * a % m; // a multiplied with itself
        b >>= 1; // b = b/2
         cout<<a<<" "<<b<<" "<<res<<endl;
    }
    return res;
}

int main()
{
   int t,a,b;
   cin>>t;
   while(t--)
   {
   cin>>a>>b;
   cout<<powf(a,b,mod)<<endl;
   }

}
