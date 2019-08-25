#include <bits/stdc++.h>
using namespace std;

#define int long long

int CutRod(int price[], int n)
{
   int val[n+1];
   val[0] = 0;

    for (int i = 1; i<=n; i++)
   {
       int max_val = INT_MIN; //Macro for Minimum Possible Value
       for (int j = 0; j < i; j++)
         max_val = max(max_val, price[j] + val[i-j-1]);
       val[i] = max_val;
   }

   return val[n];
}

main()
{
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n;
    cout<<"Enter the size of rod"<<endl;
    cin>>n;

    int multi=1,rem=0;;

    if(n>8){multi = n/8; rem = n%8;n=8;}

    printf("Maximum Obtainable Value is: %d", multi * CutRod(arr, n)+ CutRod(arr,rem));
    return 0;
}


