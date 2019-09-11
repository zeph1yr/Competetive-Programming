#include <iostream>

using namespace std;

int main()
{
    int n,j;
    char x;
    cin>>n;
    int arr[27]={0};
    for(int i=0;i<n;i++)
    {
        cin>>x;
        j=x-'A';

        if(j>26)
        {
            j=x-'a';
        }

       arr[j]++;
    }
    int flag=0;


    for(int i=0;i<26;i++){if(arr[i]==0){flag=1;break;}}

    if(flag)cout<<"NO";
        else cout<<"YES";
}
