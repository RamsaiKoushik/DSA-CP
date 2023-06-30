#include"bits/stdc++.h"
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    ll a[n];
    unordered_map<ll,ll> ump;
    ll mi=INT_MAX,ma=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mi=min(mi,a[i]);
        ma=max(ma,a[i]);
        ump[a[i]]++;
    }
    if(mi==ma)
        cout<<n-ump[mi];
    else    
        cout<<n-(ump[mi]+ump[ma]);
}