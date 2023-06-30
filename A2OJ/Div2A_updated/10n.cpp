#include"bits/stdc++.h"
using namespace std;
#define ll long long int
ll LIF(ll x,ll y)
{
    if(x%y!=0)
        return x/y+1;
    else
        return x/y;
}
int main()
{
    //2,5,8
    int a,b;
    cin>>a>>b;
    cout<<LIF(2*a,b)+LIF(5*a,b)+LIF(8*a,b);
}