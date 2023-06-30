#include"bits/stdc++.h"
using namespace std;
#define  ll long long int
int main()
{
    ll l,r;
    ll a[r-l+1];
    for(int i=0;i<r-l+1;i++)
        a[i]=l++;
    vector<vector<ll>> vec;
    for(int i=0;i<r-l+1;i++)
        for(int j=i;j<r-l+1;j++)
            if(__gcd(a[i],a[j]))
                vec.push_back({a[i],a[j]});
    for(int i=0;i<vec.size();i++)
        for(int j=i;j<vec.size();j++)
            {
                
            }
}