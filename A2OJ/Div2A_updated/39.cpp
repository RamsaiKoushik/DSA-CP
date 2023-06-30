#include"bits/stdc++.h"
using namespace std;
int MOD(int a,int b)
{
    if(a-b<0)
        return b-a;
    else
        return a-b;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b)
        if((a+b+(c/2)*2)%2==0)
            cout<<a+b+(c/2)*2;
        else
            cout<<(a+b+(c/2)*2)-1;
    else
        if((2*min(a,b)+2*min(MOD(a,b),c)+((c-min(MOD(a,b),c))/2)*2)%2==0)
            cout<<2*min(a,b)+2*min(MOD(a,b),c)+((c-min(MOD(a,b),c))/2)*2;
        else
            cout<<2*min(a,b)+2*min(MOD(a,b),c)+((c-min(MOD(a,b),c))/2)*2-1;
}