#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    long long int n=0,x=0,temp=0,cnt=0;
    vector <long long int> vi;
    cin>>n>>x;
    int b = n ;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        vi.push_back(temp);

    }
    sort(vi.begin(),vi.end());

    for(int i=0;i<n;i++)
        {
           if(b==0)break;
            if(x>=vi[i]){x=x-vi[i];cnt++;b--;}
            else break;
        }

    cout<<cnt;

}
