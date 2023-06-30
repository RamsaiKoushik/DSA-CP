#include"bits/stdc++.h"
using namespace std;
#define ll long long int
vector<ll> Factors(vector<ll>&v,ll n)
{
    int x=2;
    v.push_back(n);
    while(x<sqrt(n))
    {
        if(n%x==0)
        {
            v.push_back(x);
            v.push_back(n/x);
        }
        x++;
    }
    int temp=sqrt(n);
    if(temp*temp==n)
        v.push_back(temp);
    return v;
}
int main()
{
    int l,r;
    cin>>l>>r;
    /*vector<ll> v;
    map<ll,vector<ll>> mp;
    vector<vector<ll>> adj(r+1);
    for(ll i=l;i<=r;i++)
    {
        mp[i]=Factors(v,i);
        v.clear();
    }
    for(auto it:mp)
    {
        for(ll j=0;j<it.second.size();j++)
            adj[it.second[j]].push_back(it.first);
    }
    ll ma=INT_MIN,temp;
    ll c;
    for(int i=0;i<r+1;i++)
    {
        temp=adj[i].size();
        if(ma<temp)
        {
            c=i;
            ma=temp;
        }
    }
    //cout<<ma<<endl;
    cout<<c<<endl;*/
    if(l==r)
        cout<<l;
    else
        cout<<2;
}