#include <iostream>

using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int b,p,f,c,h;
    cin>>b>>p>>f>>h>>c;
    if(c>h){swap(p,f);swap(h,c);}
    b=b/2;
    int v1=min(b,p);
    int ans= h*v1 + c * min(f,max(0,b-p));

    cout<<ans<<endl;
}
}
