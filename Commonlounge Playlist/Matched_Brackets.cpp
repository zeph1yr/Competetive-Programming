#include <iostream>

using namespace std;

int main()
{
    int t,x,temp=0,nest_d=0,posn=0,maxs=0,posn2=0,maxs_final=0,posn1=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;

        if(temp==0){maxs=0;posn2=i+1;}
        if(nest_d<temp){nest_d=temp; posn=i;}
        if(x==1){temp++;}
        if(x==2){temp--;maxs+=2;}
        if(maxs_final<maxs){maxs_final=maxs;posn1=posn2;}
    }


    cout<< nest_d<<" "<<posn<< " " <<maxs_final<<" " <<posn1;

}
