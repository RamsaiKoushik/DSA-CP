#include"bits/stdc++.h"
using namespace std;
#define ll long long int
int main()
{
    ll n;
    ll x,y;
    cin>>n;
    cin>>x>>y;
    if(min(x,y)-1+max(x,y)-min(x,y)>n-max(x,y)+max(x,y)-min(x,y))
        cout<<"Black";
    else
        cout<<"White";
}