// Or sort the input array and check equivalence of adjacent elements, if not equal increment count, print count...Profit!

#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    set <int> s;
    int n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        s.insert(x);
    }

    cout<<s.size();

}
