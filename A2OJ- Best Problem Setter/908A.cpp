#include <iostream>
 
using namespace std;
 
int main()
{
    char x;
    string s;
     int cnt=0;
    getline(cin,s);
    int len=s.size();
    char arr[]={'a','e','i','o','u','1','3','5','7','9'};
    int j=0;
    while(j<len)
    {
        for(int i=0;i<10;i++)
            {
 
            if(s[j]==arr[i]){cnt++;break;}
            }
            j++;
   }
 
   cout<<cnt;
}
