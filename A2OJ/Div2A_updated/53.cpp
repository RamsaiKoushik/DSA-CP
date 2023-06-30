#include"bits/stdc++.h"
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    ll s=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    for(ll i=0;i<n;i++)
        cin>>b[i];
    sort(b,b+n);
    if(b[n-1]+b[n-2]>=s)
        cout<<"YES";
    else
        cout<<"NO";
}