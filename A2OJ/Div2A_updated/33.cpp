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
    int a,b;
    cin>>a>>b;
    int temp=MOD(a,b);
    if(temp%2==0)
        cout<<(temp/2)*(temp/2+1);
    else
        cout<<(((temp+1)/2)*((temp+1)/2+1))/2+((temp/2)*(temp/2+1))/2;
}