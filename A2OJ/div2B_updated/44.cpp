#include"bits/stdc++.h"
using namespace std;
#define ll long long int
int main()
{
    ll n,k;
    cin>>n>>k;
    ll s[n],b[n],sol[n];
    for(ll i=0;i<n;i++)
    {
        cin>>s[i]>>b[i];
        sol[i]=s[i]-b[i];
    }
    ll count=0;
    map<vector<ll>,ll/*,greater<ll>*/> mp;
    for(ll i=0;i<n;i++)
    {
        if(sol[i]>=0)
            count+=b[i];
        else
            mp[{min(b[i],2*s[i]),i}]=i;
    }
    ll temp=0;
    map<vector<ll>,ll/*,greater<ll>*/> ump;
    //ump=mp;
    for(auto it:mp)
        ump[it.first]=it.second;
    for (auto it = mp.rbegin(); it != mp.rend(); ++it)
        if(temp==k)
            break;
        else
        {
            count+=it->first[0];
            ump.erase({it->first[0],it->first[1]});
            temp++;
        }
    for(auto it:ump)
    {
        count+=s[it.second];
    }
    cout<<count<<endl;
}